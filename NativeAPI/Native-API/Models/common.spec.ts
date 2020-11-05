// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import 'jasmine';
import { quaternionToEuler, eulerToQuaternion } from './common';
import { metamoto, google } from './protos';

describe('quaternionToEuler', () => {
  it('works', () => {
    let q = new metamoto.types.Quaternion({ x: 0.1, y: 0.2, z: 0.3, w: 1 });
    let e = quaternionToEuler(q);
    expect(e.x).toBeCloseTo(4.0, 1);
    expect(e.y).toBeCloseTo(23.9, 1);
    expect(e.z).toBeCloseTo(34.2, 1);

    q = new metamoto.types.Quaternion({ x: -0.2, y: 0.3, z: -0.4, w: 1 });
    e = quaternionToEuler(q);
    expect(e.x).toBeCloseTo(352.9, 1);
    expect(e.y).toBeCloseTo(36.4, 1);
    expect(e.z).toBeCloseTo(314.1, 1);

    q = new metamoto.types.Quaternion({ x: 0.8, y: -0.5, z: 0, w: 1 });
    e = quaternionToEuler(q);
    expect(e.x).toBeCloseTo(57.8, 1);
    expect(e.y).toBeCloseTo(276.3, 1);
    expect(e.z).toBeCloseTo(307.3, 1);
  });
});

describe('eulerToQuaternion', () => {
  it('works', () => {
    let e = { x: 10, y: 20, z: 30 };
    let q = eulerToQuaternion(e);
    expect(q.x).toBeCloseTo(0.13, 2);
    expect(q.y).toBeCloseTo(0.15, 2);
    expect(q.z).toBeCloseTo(0.24, 2);
    expect(q.w).toBeCloseTo(0.95, 2);

    e = { x: 280, y: 30, z: 340 };
    q = eulerToQuaternion(e);
    expect(q.x).toBeCloseTo(-0.65, 2);
    expect(q.y).toBeCloseTo(0.09, 2);
    expect(q.z).toBeCloseTo(0.04, 2);
    expect(q.w).toBeCloseTo(0.76, 2);
  });
});
