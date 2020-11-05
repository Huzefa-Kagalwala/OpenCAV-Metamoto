// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { autoserialize, autoserializeAs, Serialize, Deserialize, SerializableEnumeration } from 'cerialize';

export enum LogType {
  USAGE,
  SUMMARY,
  SETTINGS
}
SerializableEnumeration(LogType);

export class AccountLog {
  @autoserializeAs(LogType)
  public type: LogType;
  @autoserialize
  public computeHours?: number;
  @autoserialize
  public frameHours?: number;
  @autoserialize
  public frameEndTime?: Date;
  @autoserialize
  public dataTransferGB?: number;
  @autoserialize
  public storageGBHours?: number;
  @autoserialize
  public storageGB?: number;

  @autoserialize
  public billingStartDate?: Date;
  @autoserialize
  public maxJobComputeHours?: number;
  @autoserialize
  public maxMonthlyComputeHours?: number;
  @autoserialize
  public maxStorageGB?: number;
  @autoserialize
  public localAddress?: string;

  public static fromJSON(data: any): AccountLog {
    return Deserialize(data, AccountLog);
  }

  public toJSON(): any {
    return Serialize(this, AccountLog);
  }
}
