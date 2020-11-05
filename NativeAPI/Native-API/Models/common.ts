// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { autoserialize, autoserializeAs, inheritSerialization, 
         Serialize, Deserialize, SerializableEnumeration } from 'cerialize';
import * as Long from 'long';    // needed for some google.protobuf.* in angular
import * as Three from 'three';  // for quaternion math
import { IParameterized, IBinary } from './interfaces';
import { metamoto, google } from './protos';

export type ParameterMap = { [k: string]: metamoto.types.IParameter };
export type Value = google.protobuf.Value;
type ValueKind = "nullValue" | "numberValue" | "stringValue" | "boolValue" | "structValue" | "listValue";

export interface UserFileMetadata {
    id: string,
    userId: string,
	fileName: string,
	fileSize: number,
    modifiedDate : string,
}

export function isFixed(parameter: metamoto.types.IParameter): boolean {
  return parameter.selected.values && parameter.selected.values.length == 1;
}

export function setParameterFixed(parameter: metamoto.types.IParameter, fixed: boolean, defaultValue: any): void {
  let selected: metamoto.types.IRange = parameter.selected;
  if (fixed) {
    if (selected.values && selected.values.length) {
      selected.values = selected.values.slice(0, 1);
    } else {
      if (defaultValue.hasOwnProperty('value')) {
        defaultValue = defaultValue.value;
      }
      selected.values = [createValueImplicit(defaultValue)];
    }
  } else {
    if (selected.numericRanges && selected.numericRanges.length) {
      selected.values = [];
    } 
  }
}

export function camelCase(str: string): string {
  return str.substring(0, 1)
       + str.substring(1)
            .replace(/_([a-z]?)/g, function($0, $1) { return $1.toUpperCase(); });
}

// These functions deal with conversion to/from Google Well-Known Types 
// (until there is native support in protobufjs).
export function getValue(value: google.protobuf.Value) : string | number | boolean | undefined {
  switch (value.kind) {
    case "stringValue":
      return value.stringValue;
    case "numberValue":
      return value.numberValue;
    case "boolValue": 
      return value.boolValue;
  }
  return null;
}

function createValueImplicit(val: any): google.protobuf.Value {
  let newVal = new google.protobuf.Value();
  if (typeof val == 'number') {
    newVal.kind = "numberValue";
    newVal.numberValue = val;
  } else if (typeof val == 'string') {
    newVal.kind = "stringValue";
    newVal.stringValue = val;
  } else if (typeof val == 'boolean') {
    newVal.kind = "boolValue";
    newVal.boolValue = val;
  }
  return newVal;
}

function createValue(val: string | number | boolean, kind: ValueKind): google.protobuf.Value {
  let newVal = new google.protobuf.Value();
  newVal.kind = kind;
  switch (kind) {
    case "stringValue":
      newVal.stringValue = <string>val;
      break;
    case "numberValue":
      newVal.numberValue = <number>val;
      break;
    case "boolValue":
      newVal.boolValue = <boolean>val;
      break;
    case "nullValue":
      newVal.nullValue = google.protobuf.NullValue.NULL_VALUE;
      break;
  }
  return newVal;
}

export function setValue(template: google.protobuf.Value, val: string | number | boolean): google.protobuf.Value {
  return createValue(val, template.kind);
}

// Returns the value inside a google.protobuf.Value object.
export function unwrapStructValue(valueObj: google.protobuf.IValue): string | Number | boolean | undefined {
  // TODO: This bullshit is done because the IValue's properties are not null or undefined, even when they should be (??)
  let obj: any = JSON.parse(JSON.stringify(valueObj));
  if (obj.numberValue != undefined) {
    return obj.numberValue;
  } else if (obj.stringValue != undefined) {
    return obj.stringValue;
  } else if (obj.boolValue != undefined) {
    return obj.boolValue;
  } else if (obj.structValue != undefined) {
    let unwrapped: any = {}
    Object.keys(obj.structValue.fields).forEach((key) => {
      unwrapped[key] = unwrapStructValue(obj.structValue.fields[key]);
    });
    return unwrapped;
  } else {
    console.log('Unsupported struct value: ' + JSON.stringify(obj));
    return undefined;
  }
}

// Wraps the value at path in a google.protobuf.Value-style wrapper.
export function wrapStructValue(root: any, path: string): void {
  let value: any = getParameterValue(root, path);
  if (typeof value == 'number') {
    setParameterValue(root, path, { numberValue: value });
  } else if (typeof value == 'string') {
    setParameterValue(root, path, { stringValue: value });
  } else if (typeof value == 'boolean') {
    setParameterValue(root, path, { boolValue: value });
  } else if (typeof value == 'object') {
    Object.keys(value).forEach((key) => {
      wrapStructValue(value, key);
    });
    setParameterValue(root, path, { structValue: { fields: value } });
  }
}

// Returns the value of an arbitrary parameter in the 'root' object at 'path'.
export function getParameterValue(root: any, path: string): any {
  let tokens: string[] = path.split('/');
  for (let i = 0; i < tokens.length; ++i) {
    // This works when root is an array and token is a number as well:
    if (root.hasOwnProperty(tokens[i])) {
      if (i == tokens.length - 1) {
        return root[tokens[i]];
      }
      root = root[tokens[i]];
    } else {
      //console.log('Invalid path token: ' + tokens[i] + ' into: ' + JSON.stringify(root));
      return undefined;
    }
  }
}

// Sets an arbitrary parameter in the 'root' object at 'path' to 'value. Returns the leaf path name.
export function setParameterValue(root: any, path: string, value: any, wrapWKTs?: boolean, 
                                  convertQuaternion?: boolean): string {
  if (convertQuaternion) {
    let qParent = getQuaternionParent(path);
    if (qParent) {
      // Trying to modify an Euler angle inside a quaternion: first get all the Euler angles.
      let euler = quaternionToEuler(getParameterValue(root, qParent));
      // Modify the requested angle.
      euler[path.substr(path.length - 1)] = value;
      // Convert back into quaternion.
      let q = eulerToQuaternion(euler);
      // Set the quaternion components one at a time.
      setParameterValue(root, qParent + '/x', q.x);
      setParameterValue(root, qParent + '/y', q.y);
      setParameterValue(root, qParent + '/z', q.z);
      return setParameterValue(root, qParent + '/w', q.w);
    }
  }
  let tokens: string[] = path.split('/');
  for (let i = 0; i < tokens.length; ++i) {
    // This works when root is an array and token is a number as well:
    if (i == tokens.length - 1) {
      // This is super hacky way to avoid having to have the correct paths for WKTs (FloatValue etc.)
      if (wrapWKTs && (tokens[i] == 'targetSpeed' || tokens[i] == 'dirt' || tokens[i] == 'greenTime' || 
          tokens[i] == 'yellowTime' || tokens[i] == 'crosswalkWalkTime' || tokens[i] == 'failValue' || 
          tokens[i] == 'stopValue')) {
        root[tokens[i]] = { value: value };
      } else {
        root[tokens[i]] = value;
      }
      return tokens[i];
    }
    if (!root.hasOwnProperty(tokens[i])) {
      //console.log('Invalid path token: ' + tokens[i] + ' into: ' + JSON.stringify(root));
      root[tokens[i]] = {};
    }
    root = root[tokens[i]];
  }
}

// Wraps the value at 'path' with a 'value' (wrappers.proto-style).
export function wrapValue(root: any, path: string): void {
  let value: any = getParameterValue(root, path);
  if (value === undefined) {
    return;
  }
  setParameterValue(root, path, { value: value });
}

// Unwraps the value at 'path' from its 'value' wrapper (wrappers.proto-style).
export function unwrapValue(root: any, path: string): void {
  let value: any = getParameterValue(root, path);
  if (value === undefined || !value.hasOwnProperty('value')) {
    return;
  }
  setParameterValue(root, path, value.value);
}

// Wraps each google.protobuf.Value-style 'value' in a ranges map.
export function wrapRanges(ranges: any): void {
  Object.keys(ranges).forEach((key) => {
    let range = ranges[key];
    if (range.values) {
      for (let i = 0; i < range.values.length; ++i) {
        wrapStructValue(range.values, i.toString());
      }
    }
  });
}

// Unwraps each google.protobuf.Value-style 'value' in a ranges map.
export function unwrapRanges(ranges: any): void {
  Object.keys(ranges).forEach((key) => {
    let range = ranges[key];
    if (range.values) {
      for (let i = 0; i < range.values.length; ++i) {
        range.values[i] = unwrapStructValue(range.values[i]);
      }
    }
  });
}

export function getQuaternionParent(path: string): string {
  let param = path.substr(path.lastIndexOf('/') + 1);
  if (param != 'x' && param != 'y' && param != 'z') {
    return '';
  }
  let parentPath = path.substr(0, path.length - 2);
  if (parentPath.endsWith('/orientation')) {
    return parentPath;
  } else {
    return '';
  }
}

// Converts quaternion to Euler angles {x, y, z}.
export function quaternionToEuler(quaternion: metamoto.types.IQuaternion): any {
  let q = new Three.Quaternion(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
  q.normalize();
  let e = new Three.Euler();
  e.setFromQuaternion(q, 'YXZ');  // This is the order that works to match our left-handed system.
  
  let euler = { x: 0, y: 0, z: 0 };
  euler.x = e.x * 180 / Math.PI; if (euler.x < 0) euler.x += 360;
  euler.y = e.y * 180 / Math.PI; if (euler.y < 0) euler.y += 360;
  euler.z = e.z * 180 / Math.PI; if (euler.z < 0) euler.z += 360;

  return euler;
}

// Converts Euler angles to quaternion.
export function eulerToQuaternion(euler: any): metamoto.types.Quaternion {
  let e = new Three.Euler(euler.x * Math.PI / 180, euler.y * Math.PI / 180, euler.z * Math.PI / 180, 'YXZ');
  let q = new Three.Quaternion();
  q.setFromEuler(e);
  
  let quaternion = new metamoto.types.Quaternion();
  quaternion.x = q.x;
  quaternion.y = q.y;
  quaternion.z = q.z;
  quaternion.w = q.w;

  return quaternion;
}

// Controller and Sensor classes are used only for /controllers and /sensors JSON editors
export class Controller extends metamoto.types.Controller {
  //IParameterized
  public isSingleCase(): boolean { 
    return true; 
  }

  public static fromObject(controller: { [k: string]: any }): Controller {
    this.wrapWKTs(controller);
    return new Controller(super.fromObject(controller));
  }

  public toJSON(): { [k: string]: any } {
    let controller: any = super.toJSON();
    Controller.unwrapWKTs(controller);
    return controller;
  }

  public static copy(controller: Controller): Controller {
    return new Controller(Controller.fromObject(controller.toJSON()));
  }

  // Unfortunately, have to wrap all FloatValues, Structs etc because protobufjs doesn't support them natively yet.
  public static wrapWKTs(controller: metamoto.types.IController): void {
    let params: any = controller.parameters;
    if (params) {
      Object.keys(params).forEach((key) => {
        wrapStructValue(params, key);
      });
      controller.parameters = { fields: params };
    }
    if (controller.ranges) {
      wrapRanges(controller.ranges);
    }
  }

  public static unwrapWKTs(controller: metamoto.types.IController): void {
    let params: any = controller.parameters;
    if (params && params.fields) {
      Object.keys(params.fields).forEach((key) => {
        params.fields[key] = unwrapStructValue(params.fields[key]);
      });
      controller.parameters = controller.parameters.fields;
    }
    if (controller.ranges) {
      unwrapRanges(controller.ranges);
    }
  }
}

// Controller and Sensor classes are used only for /controllers and /sensors JSON editors
export class Sensor extends metamoto.types.Sensor {
  //IParameterized
  public isSingleCase(): boolean { 
    return true; 
  }

  public static fromObject(sensor: { [k: string]: any }): Sensor {
    this.wrapWKTs(sensor);
    return new Sensor(super.fromObject(sensor));
  }

  public toJSON(): { [k: string]: any } {
    let sensor: any = super.toJSON();
    Sensor.unwrapWKTs(sensor);
    return sensor;
  }

  public static copy(sensor: Sensor): Sensor {
    return new Sensor(Sensor.fromObject(sensor.toJSON()));
  }

  // Unfortunately, have to wrap all FloatValues, Structs etc because protobufjs doesn't support them natively yet.
  public static wrapWKTs(sensor: metamoto.types.ISensor): void {
    let params: any = sensor.parameters;
    if (params) {
      Object.keys(params).forEach((key) => {
        wrapStructValue(params, key);
      });
      sensor.parameters = { fields: params };
    }
    if (sensor.ranges) {
      wrapRanges(sensor.ranges);
    }
  }

  public static unwrapWKTs(sensor: metamoto.types.ISensor): void {
    let params: any = sensor.parameters;
    if (params && params.fields) {
      Object.keys(params.fields).forEach((key) => {
        params.fields[key] = unwrapStructValue(params.fields[key]);
      });
      sensor.parameters = sensor.parameters.fields;
    }
    if (sensor.ranges) {
      unwrapRanges(sensor.ranges);
    }
  }
}

// VehicleDynamics class is used only for /vehicle-dynamics JSON editor
export class VehicleDynamics extends metamoto.types.VehicleDynamics {
  //IParameterized
  public isSingleCase(): boolean { 
    return true; 
  }

  public static fromObject(vd: { [k: string]: any }): VehicleDynamics {
    this.wrapWKTs(vd);
    return new VehicleDynamics(super.fromObject(vd));
  }

  public toJSON(): { [k: string]: any } {
    let vd: any = super.toJSON();
    VehicleDynamics.unwrapWKTs(vd);
    return vd;
  }

  public static copy(vd: VehicleDynamics): VehicleDynamics {
    return new VehicleDynamics(VehicleDynamics.fromObject(vd.toJSON()));
  }

  // Unfortunately, have to wrap all FloatValues, Structs etc because protobufjs doesn't support them natively yet.
  public static wrapWKTs(vd: metamoto.types.IVehicleDynamics): void {
    let params: any = vd.parameters;
    if (params) {
      Object.keys(params).forEach((key) => {
        wrapStructValue(params, key);
      });
      vd.parameters = { fields: params };
    }
    if (vd.ranges) {
      wrapRanges(vd.ranges);
    }
  }

  public static unwrapWKTs(vd: metamoto.types.IVehicleDynamics): void {
    let params: any = vd.parameters;
    if (params && params.fields) {
      Object.keys(params.fields).forEach((key) => {
        params.fields[key] = unwrapStructValue(params.fields[key]);
      });
      vd.parameters = vd.parameters.fields;
    }
    if (vd.ranges) {
      unwrapRanges(vd.ranges);
    }
  }
}

export class Scenario extends metamoto.types.Scenario {
  //IParameterized
  public isSingleCase(): boolean { 
    return true; 
  }

  public static fromObject(scenario: { [k: string]: any }): Scenario {
    this.wrapWKTs(scenario);
    return new Scenario(super.fromObject(scenario));
  }

  public toJSON(): { [k: string]: any } {
    let scenario: any = super.toJSON();
    Scenario.unwrapWKTs(scenario);
    return scenario;
  }

  public static copy(scenario: Scenario): Scenario {
    return new Scenario(Scenario.fromObject(scenario.toJSON()));
  }

  // Unfortunately, have to wrap all FloatValues, Structs etc because protobufjs doesn't support them natively yet.
  public static wrapWKTs(scenario: metamoto.types.IScenario): void {
    if (scenario.objectives && scenario.objectives.infractions) {
      let infr = scenario.objectives.infractions;
      for (let i = 0; i < infr.length; ++i) {
        wrapValue(infr, i + '/failValue');
        wrapValue(infr, i + '/stopValue');
        for (let j = 0; infr[i].otherValues && j < infr[i].otherValues.length; ++j) {
          wrapValue(infr[i], 'otherValues/' + j);
        }
      }
    }
    if (scenario.trafficLights) {
      let tl = scenario.trafficLights;
      Object.keys(tl).forEach((key) => {
        for (let i = 0; tl[key].directions && i < tl[key].directions.length; ++i) {
          wrapValue(tl[key].directions[i], 'greenTime');
          wrapValue(tl[key].directions[i], 'yellowTime');
          wrapValue(tl[key].directions[i], 'crosswalkWalkTime');
        }
      });
    }
    if (scenario.traffic) {
      if (scenario.traffic.vehicles) {
        let veh = scenario.traffic.vehicles;
        for (let i = 0; i < veh.length; ++i) {
          wrapValue(veh[i], 'instance/body/dirt');
          for (let j = 0; veh[i].path && j < veh[i].path.length; ++j) {
            wrapValue(veh[i].path[j], 'targetSpeed');
          }
        }
      }
      if (scenario.traffic.parkedVehicles) {
        for (let i = 0; i < scenario.traffic.parkedVehicles.length; ++i) {
          wrapValue(scenario.traffic.parkedVehicles[i], 'instance/body/dirt');
        }
      }
    }
    for (let i = 0; scenario.egoVehicle && scenario.egoVehicle.path && i < scenario.egoVehicle.path.length; ++i) {
      wrapValue(scenario.egoVehicle.path[i], 'targetSpeed');
    }
    for (let i = 0; scenario.egoVehicles && i < scenario.egoVehicles.length; ++i) {
      for (let j = 0; scenario.egoVehicles[i].path && j < scenario.egoVehicles[i].path.length; ++j) {
        wrapValue(scenario.egoVehicles[i].path[j], 'targetSpeed');
      }
    }
    if (scenario.ranges) {
      wrapRanges(scenario.ranges);
    }
  }

  public static unwrapWKTs(scenario: metamoto.types.IScenario): void {
    if (scenario.objectives && scenario.objectives.infractions) {
      let infr = scenario.objectives.infractions;
      for (let i = 0; i < infr.length; ++i) {
        unwrapValue(infr, i + '/failValue');
        unwrapValue(infr, i + '/stopValue');
        for (let j = 0; infr[i].otherValues && j < infr[i].otherValues.length; ++j) {
          unwrapValue(infr[i], 'otherValues/' + j);
        }
      }
    }
    if (scenario.trafficLights) {
      let tl = scenario.trafficLights;
      Object.keys(tl).forEach((key) => {
        for (let i = 0; tl[key].directions && i < tl[key].directions.length; ++i) {
          unwrapValue(tl[key].directions[i], 'greenTime');
          unwrapValue(tl[key].directions[i], 'yellowTime');
          unwrapValue(tl[key].directions[i], 'crosswalkWalkTime');
        }
      });
    }
    if (scenario.traffic) {
      if (scenario.traffic.vehicles) {
        let veh = scenario.traffic.vehicles;
        for (let i = 0; i < veh.length; ++i) {
          unwrapValue(veh[i], 'instance/body/dirt');
          for (let j = 0; veh[i].path && j < veh[i].path.length; ++j) {
            unwrapValue(veh[i].path[j], 'targetSpeed');
          }
        }
      }
      if (scenario.traffic.parkedVehicles) {
        for (let i = 0; i < scenario.traffic.parkedVehicles.length; ++i) {
          unwrapValue(scenario.traffic.parkedVehicles[i], 'instance/body/dirt');
        }
      }
    }
    for (let i = 0; scenario.egoVehicle && scenario.egoVehicle.path && i < scenario.egoVehicle.path.length; ++i) {
      unwrapValue(scenario.egoVehicle.path[i], 'targetSpeed');
    }
    for (let i = 0; scenario.egoVehicles && i < scenario.egoVehicles.length; ++i) {
      for (let j = 0; scenario.egoVehicles[i].path && j < scenario.egoVehicles[i].path.length; ++j) {
        unwrapValue(scenario.egoVehicles[i].path[j], 'targetSpeed');
      }
    }
    if (scenario.ranges) {
      unwrapRanges(scenario.ranges);
    }
  }
}

export class EgoVehicle extends metamoto.types.EgoVehicle {
  //IParameterized
  public isSingleCase(): boolean { 
    return true; 
  }

  public static fromObject(vehicle: { [k: string]: any }): EgoVehicle {
    this.wrapWKTs(vehicle);
    return new EgoVehicle(super.fromObject(vehicle));
  }

  public toJSON(): { [k: string]: any } {
    let vehicle: any = super.toJSON();
    EgoVehicle.unwrapWKTs(vehicle);
    return vehicle;
  }

  public static copy(vehicle: EgoVehicle): EgoVehicle {
    return new EgoVehicle(EgoVehicle.fromObject(vehicle.toJSON()));
  }

  // Unfortunately, have to wrap all FloatValues, Structs etc because protobufjs doesn't support them natively yet.
  public static wrapWKTs(vehicle: metamoto.types.IEgoVehicle): void {
    wrapValue(vehicle, 'body/dirt');
    for (let i = 0; vehicle.sensors && i < vehicle.sensors.length; ++i) {
      if (vehicle.sensors[i].pose && vehicle.sensors[i].pose.orientation) {
        quaternionToEuler(vehicle.sensors[i].pose.orientation);
      }
      let params: any = vehicle.sensors[i].parameters;
      if (params) {
        Object.keys(params).forEach((key) => {
          wrapStructValue(params, key);
        });
        vehicle.sensors[i].parameters = { fields: params };
      }
      if (vehicle.sensors[i].ranges) {
        wrapRanges(vehicle.sensors[i].ranges);
      }
    }
    for (let i = 0; vehicle.controllers && i < vehicle.controllers.length; ++i) {
      let params: any = vehicle.controllers[i].parameters;
      if (params) {
        Object.keys(params).forEach((key) => {
          wrapStructValue(params, key);
        });
        vehicle.controllers[i].parameters = { fields: params };
      }
      if (vehicle.controllers[i].ranges) {
        wrapRanges(vehicle.controllers[i].ranges);
      }
    }
    if (vehicle.vehicleDynamics) {
      let params: any = vehicle.vehicleDynamics.parameters;
      if (params) {
        Object.keys(params).forEach((key) => {
          wrapStructValue(params, key);
        });
        vehicle.vehicleDynamics.parameters = { fields: params };
      }
      if (vehicle.vehicleDynamics.ranges) {
        wrapRanges(vehicle.vehicleDynamics.ranges);
      }
    }
    if (vehicle.ranges) {
      wrapRanges(vehicle.ranges);
    }
  }

  public static unwrapWKTs(vehicle: metamoto.types.IEgoVehicle): void {
    unwrapValue(vehicle, 'body/dirt');
    for (let i = 0; vehicle.sensors && i < vehicle.sensors.length; ++i) {
      let params: any = vehicle.sensors[i].parameters;
      if (params && params.fields) {
        Object.keys(params.fields).forEach((key) => {
          params.fields[key] = unwrapStructValue(params.fields[key]);
        });
        vehicle.sensors[i].parameters = vehicle.sensors[i].parameters.fields;
      }
      if (vehicle.sensors[i].ranges) {
        unwrapRanges(vehicle.sensors[i].ranges);
      }
    }
    for (let i = 0; vehicle.controllers && i < vehicle.controllers.length; ++i) {
      let params: any = vehicle.controllers[i].parameters;
      if (params && params.fields) {
        Object.keys(params.fields).forEach((key) => {
          params.fields[key] = unwrapStructValue(params.fields[key]);
        });
        vehicle.controllers[i].parameters = vehicle.controllers[i].parameters.fields;
      }
      if (vehicle.controllers[i].ranges) {
        unwrapRanges(vehicle.controllers[i].ranges);
      }
    }
    if (vehicle.vehicleDynamics) {
      let params: any = vehicle.vehicleDynamics.parameters;
      if (params && params.fields) {
        Object.keys(params.fields).forEach((key) => {
          params.fields[key] = unwrapStructValue(params.fields[key]);
        });
        vehicle.vehicleDynamics.parameters = vehicle.vehicleDynamics.parameters.fields;
      }
      if (vehicle.vehicleDynamics.ranges) {
        unwrapRanges(vehicle.vehicleDynamics.ranges);
      }
    }
    if (vehicle.ranges) {
      unwrapRanges(vehicle.ranges);
    }
  }


  public static getSUTs(vehicle: metamoto.types.IEgoVehicle): IBinary[] {
    let suts: IBinary[] = [];
    if (!vehicle) {
      return suts;
    }
    for (let i = 0; vehicle.controllers && i < vehicle.controllers.length; ++i) {
      if (vehicle.controllers[i].sut) {
        suts.push(vehicle.controllers[i]);
      }
    }
    for (let i = 0; vehicle.sensors && i < vehicle.sensors.length; ++i) {
      if (vehicle.sensors[i].sut) {
        suts.push(vehicle.sensors[i]);
      }
    }
    if (vehicle.vehicleDynamics) {
      suts.push(vehicle.vehicleDynamics);
    }
    return suts;
  }
}

export class SUTImage {
  @autoserialize
  public name: string;
  @autoserialize
  public id: string;

  constructor() {
  }

  public static fromJSON(value: any): SUTImage {
    return Deserialize(value, SUTImage);
  }

  public tagName(): string {
    let split = this.name.split(" - ");
    return split[0];
  }

  public timestamp(): Date {
    let split = this.name.split(" - ");
    if (split.length < 2) {
      split.push((new Date()).toISOString());
    }
    return new Date(Date.parse(split[1]));
  }
}
