package radar_msgs;

public interface RadarProcessedArray extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "radar_msgs/RadarProcessedArray";
  static final java.lang.String _DEFINITION = "std_msgs/Header header\nradar_msgs/RadarProcessed[] groundtruth\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  java.util.List<radar_msgs.RadarProcessed> getGroundtruth();
  void setGroundtruth(java.util.List<radar_msgs.RadarProcessed> value);
}
