// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { Scenario, EgoVehicle, camelCase, unwrapValue, setParameterFixed, 
         getParameterValue, getValue, quaternionToEuler, getQuaternionParent } from './common';
import { IParameterized, IBinary } from './interfaces';
import { google, metamoto } from './protos';
import Parameter = metamoto.types.Parameter;
import IRange = metamoto.types.IRange;

export type Strategy = metamoto.types.TestVector.Strategy;

export class TestVector extends metamoto.types.TestVector implements IParameterized {
  public isSaving: boolean;
  public nameChanged: boolean;
  public suts: IBinary[];
  public isUnsaved: boolean;

  constructor(base?: metamoto.types.TestVector) {
    super(base);
    this.isUnsaved = false;
    this.suts = [];
    if (!base) {
      this.scenario = new Scenario();
      this.egoVehicle = new EgoVehicle();
    }
    this.resetSUTs();
  }

  public static fromObject(object: { [k: string]: any }): TestVector {
    return new TestVector(super.fromObject(object));
  }

  public static copy(vector: TestVector): TestVector {
    return new TestVector(TestVector.fromObject(vector.toJSON()));
  }

  //IParameterized
  public isSingleCase(): boolean {
    return this.strategy == TestVector.Strategy.SINGLE;
  }

  public hasParameters(): boolean {
    return this.parameters && this.parameters != {};
  }

  public setScenario(scenario: Scenario): void {
    this.scenario = scenario;
    this.importNewRanges(scenario, 'scenario');
  }

  public setEgoVehicle(vehicle: EgoVehicle, clear?: boolean): void {
    this.egoVehicle = vehicle;
    this.importNewRanges(vehicle, 'egoVehicle');
    this.resetSUTs(!clear);
  }

  // This method copies a 'ranges' map from an obj into this.parameters, while converting keys from 
  // proto_syntax to camelCase and prepending a 'prefix' to the key, setting parameterName to the 
  // name of the param if it is not set, and initializing a 'selected' Range.
  // If the key already exists in this.parameters, it is overwritten EXCEPT for its 'selected' Range.
  // Keys with the same prefix that are NOT in the new obj.ranges are REMOVED.
  public importNewRanges(obj: any, prefix: string): void {

    //reset 'valid' key on existing parameters so that they get removed during the new check
    for (let k of Object.keys(this.parameters)) {
      if (k.indexOf(prefix + '/') === 0) {
        this.parameters[k]['valid'] = false;
      }     
    }

    Object.keys(obj.ranges).forEach((key) => {
      let newKey: string = prefix + '/' + camelCase(key);
      let range: IRange = obj.ranges[key];
      let selected: IRange;
      if (this.parameters.hasOwnProperty(newKey)) {
        selected = this.parameters[newKey].selected;
      } else {
        selected = metamoto.types.Range.fromObject({
          parameterName: range.parameterName,
          values: range.values.slice(0), 
          numericRanges: range.numericRanges.slice(0) 
        });
      }
      this.parameters[newKey] = new Parameter({ range: range, selected: selected });
      if (!this.parameters[newKey].selected.parameterName) {
        this.parameters[newKey].selected.parameterName = newKey.substr(newKey.lastIndexOf('/') + 1);  // TODO: 'camelCase' -> 'Camel Case'
      }
      this.parameters[newKey]['valid'] = true;
    });

    // Remove old parameters with same prefix that weren't in the new object.
    for (let k of Object.keys(this.parameters)) {
      if (k.indexOf(prefix + '/') === 0 && !this.parameters[k]['valid']) {
        delete this.parameters[k];
      }
    }
  }

  public getNumberOfTests(): number {
    switch (this.strategy) {
      case TestVector.Strategy.RANDOM:
        return this.numTests;
      case TestVector.Strategy.SINGLE:
        return 1;
      case TestVector.Strategy.EDGES:
      case TestVector.Strategy.EXHAUSTIVE:
        let cases = 1;
        Object.keys(this.parameters).forEach((key) => {
          if (this.parameters[key]) {
            let selected = this.parameters[key].selected;
            if (selected.values && selected.values.length) {
              cases *= selected.values.length;
            } else if (this.strategy == TestVector.Strategy.EDGES) {
              cases *= 2;
            } else if (selected.numericRanges && selected.numericRanges.length && selected.numericRanges[0].step) {
              // This avoids rounding errors.
              let n, v;
              for (n = 0, v = selected.numericRanges[0].min; v <= selected.numericRanges[0].max; v += selected.numericRanges[0].step, ++n);
              cases *= n;
            }
          }
        });
        return cases;
    }
  }

  // Sets the parameter.selected for 'key' to either a fixed value or unfixed range.
  // Default value for newly fixed parameters comes from the value on the vector itself.
  // Special case for 'orientation' components - they are converted from quaternion to Euler angles for display/setting.
  public setFixed(key: string, fixed: boolean): void {
    if (!this.parameters.hasOwnProperty(key) || !this.parameters[key].selected) {
      return;
    }

    let defaultValue: string | number | boolean = 0;

    if (fixed) {
      let val = getParameterValue(this, key);
      if (val !== null && val !== undefined) {
        let qParent = getQuaternionParent(key);
        if (qParent) {
          val = quaternionToEuler(getParameterValue(this, qParent))[key.substr(key.length - 1)];
        }
        defaultValue = val;
      }
    }

    setParameterFixed(this.parameters[key], fixed, defaultValue);
  }

  public setAllFixed(fixed: boolean): void {
    Object.keys(this.parameters).forEach((key) => {
      this.setFixed(key, fixed);
    });
  }

  public resetSUTs(merge?: boolean): void {
    if (merge) {
      var prevSuts: IBinary[] = this.suts.slice(0);
    }
    this.suts = EgoVehicle.getSUTs(this.egoVehicle);

    if (merge) {
      for (let i = 0; i < this.suts.length; ++i) {
        prevSuts.forEach((sut: IBinary) => { 
          if (this.suts[i].displayName == sut.displayName && this.suts[i].internalName == sut.internalName) {
            this.suts[i].sut.image = sut.sut.image;
          }
        });
      }
    }
  }
}
