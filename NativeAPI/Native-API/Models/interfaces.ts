// Copyright (c) 2018-2020 Metamoto, Inc. All Rights Reserved.

import { google, metamoto } from './protos';
import { ParameterMap } from './common';

export interface IParameterized {
  isSingleCase(): boolean;
  parameters?: (ParameterMap|null);
}

export interface IBinary {
  displayName?: (string|null);
  internalName?: (string|null);
  sut?: (metamoto.types.ISystemUnderTest|null);
}


export interface ITestStatus {
  startTime?: string;
  progress: number;
  isStillRunning(): boolean;
  isPassing(): boolean;
  isFailing(): boolean;
  isErrored(): boolean;
  isPending(): boolean;
  isStopped(): boolean;
  getId(): string;
}


interface UserInfoUserMetaData {
	name: string;
	company: string;
}

interface UserInfoAppMetaData {
	systemUser?: boolean;
	role?: string;
        labels?: string[];
}

export interface UserInfo {
	email: string;
	user_id: string;
	user_metadata: UserInfoUserMetaData;
	app_metadata?: UserInfoAppMetaData;
}
