// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { ITestStatus } from './interfaces';

import { metamoto } from './protos';
import Status = metamoto.types.TestResult.Status;


export class TestJob extends metamoto.types.TestJob implements ITestStatus {
  constructor(base?: metamoto.types.ITestJob) {
    super(base);
  }

  public static fromObject(object: { [k: string]: any }): TestJob {
    return new TestJob(super.fromObject(object));
  }
  
  //ITestStatus
  public getId(): string {
    return this.jobId;
  }

  public isStillRunning(): boolean {
    return !this.endTime;
  }

  public isPassing(): boolean {
    return this.status === undefined || this.status === null || this.status === Status.PASS || this.status === Status.RUNNING || this.status === Status.POST_PROCESSING;
  }

  public isFailing(): boolean {
    return this.status === Status.FAIL;
  }

  public isPending(): boolean {
    return this.status === Status.PENDING;
  }

  public isErrored(): boolean {
    return this.status === Status.ERROR;
  }

  public isStopped(): boolean {
    return this.status === Status.STOP || this.status === Status.STOPPING;
  }
}
