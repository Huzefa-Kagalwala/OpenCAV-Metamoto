
"use strict";

let ConfigureOutputsKpKiCmd = require('./ConfigureOutputsKpKiCmd.js');
let ReassignCommandIdCmd = require('./ReassignCommandIdCmd.js');
let SoftwareVersionReq = require('./SoftwareVersionReq.js');
let PositionRpt = require('./PositionRpt.js');
let ConfigureOutputsKdFreqDeadbandCmd = require('./ConfigureOutputsKdFreqDeadbandCmd.js');
let AutoZeroCalCmd = require('./AutoZeroCalCmd.js');
let PositionCmd = require('./PositionCmd.js');
let UniqueDeviceIdRpt = require('./UniqueDeviceIdRpt.js');
let ZeroingMessageRpt = require('./ZeroingMessageRpt.js');
let PriorityConfigCmd = require('./PriorityConfigCmd.js');
let ReportIndex = require('./ReportIndex.js');
let ReportPollReq = require('./ReportPollReq.js');
let ActuatorUniqueIdReq = require('./ActuatorUniqueIdReq.js');
let SoftwareRevisionRpt = require('./SoftwareRevisionRpt.js');
let ResetCmd = require('./ResetCmd.js');
let EnhancedPositionRpt = require('./EnhancedPositionRpt.js');
let ReassignReportIdCmd = require('./ReassignReportIdCmd.js');
let PositionReachErrorTimeConfigCmd = require('./PositionReachErrorTimeConfigCmd.js');
let MotorCurrentRpt = require('./MotorCurrentRpt.js');
let ConfigureOutputsPwmFreqCmd = require('./ConfigureOutputsPwmFreqCmd.js');
let ScheduledReportRatesReq = require('./ScheduledReportRatesReq.js');
let MotorOverCurrentConfigCmd = require('./MotorOverCurrentConfigCmd.js');

module.exports = {
  ConfigureOutputsKpKiCmd: ConfigureOutputsKpKiCmd,
  ReassignCommandIdCmd: ReassignCommandIdCmd,
  SoftwareVersionReq: SoftwareVersionReq,
  PositionRpt: PositionRpt,
  ConfigureOutputsKdFreqDeadbandCmd: ConfigureOutputsKdFreqDeadbandCmd,
  AutoZeroCalCmd: AutoZeroCalCmd,
  PositionCmd: PositionCmd,
  UniqueDeviceIdRpt: UniqueDeviceIdRpt,
  ZeroingMessageRpt: ZeroingMessageRpt,
  PriorityConfigCmd: PriorityConfigCmd,
  ReportIndex: ReportIndex,
  ReportPollReq: ReportPollReq,
  ActuatorUniqueIdReq: ActuatorUniqueIdReq,
  SoftwareRevisionRpt: SoftwareRevisionRpt,
  ResetCmd: ResetCmd,
  EnhancedPositionRpt: EnhancedPositionRpt,
  ReassignReportIdCmd: ReassignReportIdCmd,
  PositionReachErrorTimeConfigCmd: PositionReachErrorTimeConfigCmd,
  MotorCurrentRpt: MotorCurrentRpt,
  ConfigureOutputsPwmFreqCmd: ConfigureOutputsPwmFreqCmd,
  ScheduledReportRatesReq: ScheduledReportRatesReq,
  MotorOverCurrentConfigCmd: MotorOverCurrentConfigCmd,
};
