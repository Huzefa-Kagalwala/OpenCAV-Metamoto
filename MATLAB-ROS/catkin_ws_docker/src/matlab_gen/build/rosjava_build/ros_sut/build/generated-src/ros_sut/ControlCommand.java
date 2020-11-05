package ros_sut;

public interface ControlCommand extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "ros_sut/ControlCommand";
  static final java.lang.String _DEFINITION = "std_msgs/Header header\nfloat32 acceleration\nfloat32 steer\nfloat32 brake\nfloat32 throttle\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  float getAcceleration();
  void setAcceleration(float value);
  float getSteer();
  void setSteer(float value);
  float getBrake();
  void setBrake(float value);
  float getThrottle();
  void setThrottle(float value);
}
