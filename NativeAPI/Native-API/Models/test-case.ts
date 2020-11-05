// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { IParameterized, ITestStatus } from './interfaces';
import { TestJob } from './test-job';
import { metamoto } from './protos';
import Status = metamoto.types.TestResult.Status;


export class TestCase extends metamoto.types.TestCase implements IParameterized {
  public static fromObject(object: { [k: string]: any }): TestCase {
    let tCase: TestCase = new TestCase(super.fromObject(object));
    for (let i = 0; tCase.history && i < tCase.history.length; ++i) {
      tCase.history[i] = new TestJob(tCase.history[i]);
    }
    return tCase;
  }

  //IParameterized
  public isSingleCase(): boolean {
    return false;  // why?
  }

  public getNumRunning(): number {
    return this.history.map(j => new TestJob(j)).filter(j => j.isStillRunning()).length;
  }
}
