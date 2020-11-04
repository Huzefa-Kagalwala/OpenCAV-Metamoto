package ros_sut;

public interface SixChannelControlCommand extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "ros_sut/SixChannelControlCommand";
  static final java.lang.String _DEFINITION = "std_msgs/Header header\n\n# 4 wheel speeds in rpm\nfloat32 fl_rpm\nfloat32 fr_rpm\nfloat32 rl_rpm\nfloat32 rr_rpm\n\n# front 2 wheel steer angles in degrees, left is positive\nfloat32 fl_steer\nfloat32 fr_steer\n\n# Brake value from 0 to 1\nfloat32 brake\n\n# Throttle value from 0 to 1\nfloat32 throttle\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  float getFlRpm();
  void setFlRpm(float value);
  float getFrRpm();
  void setFrRpm(float value);
  float getRlRpm();
  void setRlRpm(float value);
  float getRrRpm();
  void setRrRpm(float value);
  float getFlSteer();
  void setFlSteer(float value);
  float getFrSteer();
  void setFrSteer(float value);
  float getBrake();
  void setBrake(float value);
  float getThrottle();
  void setThrottle(float value);
}
