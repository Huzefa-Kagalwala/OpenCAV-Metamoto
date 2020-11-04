package gps_msgs;

public interface gps extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "gps_msgs/gps";
  static final java.lang.String _DEFINITION = "float32 latitude\nfloat32 longitude\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  float getLatitude();
  void setLatitude(float value);
  float getLongitude();
  void setLongitude(float value);
}
