// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { ITestStatus } from './interfaces';
import { TestJob } from './test-job';
import { metamoto } from './protos';
import Status = metamoto.types.TestResult.Status;


export class TestRun extends metamoto.types.TestRun implements ITestStatus {
  public static fromObject(object: { [k: string]: any }): TestRun {
    let run: TestRun = new TestRun(super.fromObject(object));
    for (let i = 0; run.testJobs && i < run.testJobs.length; ++i) {
      run.testJobs[i] = new TestJob(run.testJobs[i]);
    }
    return run;
  }

  //ITestStatus
  public getId(): string {
    return this.id;
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

  public getPassedJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => !j.isStillRunning() && j.isPassing());
  }

  public getFailedJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => !j.isStillRunning() && j.isFailing());
  }

  public getStoppedJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => !j.isStillRunning() && j.isStopped());
  }

  public getErroredJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => !j.isStillRunning() && j.isErrored());
  }

  public getRunningJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => j.isStillRunning() && !j.isPending());
  }

  public getPendingJobs(): TestJob[] {
    return this.testJobs.map(j => new TestJob(j)).filter(j => j.isPending());
  }
}
