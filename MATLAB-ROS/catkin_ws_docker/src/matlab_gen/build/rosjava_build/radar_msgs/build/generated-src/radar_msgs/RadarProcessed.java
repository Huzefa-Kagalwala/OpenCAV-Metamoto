package radar_msgs;

public interface RadarProcessed extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "radar_msgs/RadarProcessed";
  static final java.lang.String _DEFINITION = "uint16 object_type\nfloat64 range\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  short getObjectType();
  void setObjectType(short value);
  double getRange();
  void setRange(double value);
}
