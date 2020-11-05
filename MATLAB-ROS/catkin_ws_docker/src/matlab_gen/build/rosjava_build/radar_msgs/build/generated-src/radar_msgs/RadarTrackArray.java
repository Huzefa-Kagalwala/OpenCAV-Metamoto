package radar_msgs;

public interface RadarTrackArray extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "radar_msgs/RadarTrackArray";
  static final java.lang.String _DEFINITION = "std_msgs/Header header\n\nRadarTrack[] tracks\n\n";
  static final boolean _IS_SERVICE = false;
  static final boolean _IS_ACTION = false;
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  java.util.List<radar_msgs.RadarTrack> getTracks();
  void setTracks(java.util.List<radar_msgs.RadarTrack> value);
}
