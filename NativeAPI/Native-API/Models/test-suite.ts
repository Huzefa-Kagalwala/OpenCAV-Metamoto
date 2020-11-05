// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { metamoto } from './protos';

export let ScheduleType = metamoto.types.TestSuite.ScheduleType;


export class TestSuite extends metamoto.types.TestSuite {
  public isSaving: boolean;
  public nextRunDate: Date;
  public nameChanged: boolean;
  public isUnsaved: boolean;

  constructor(base?: metamoto.types.TestSuite) {
    super(base);
    this.isUnsaved = false;
    if (base && this.nextRunTime) {
      this.nextRunDate = new Date(this.nextRunTime); 
    }
  }

  public static fromObject(object: { [k: string]: any }): TestSuite {
    return new TestSuite(super.fromObject(object));
  }

  public static copy(suite: TestSuite): TestSuite {
    return new TestSuite(TestSuite.fromObject(suite.toJSON()));
  }
}
