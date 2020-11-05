#include <fstream>
#include <string>
#include <cmath>
#include <ctype.h>
#include <tf/transform_datatypes.h>
#include "data_conversions.h"


using namespace std;
using namespace metamoto::types;
using namespace metamoto::messages;


const float DEG_2_RAD = 0.01745329252f;
const float RAD_2_DEG = 57.2957795f;


// VECTOR/QUATERNION MATH
Vector3 NewVector3(float x, float y, float z) {
  Vector3 v;
  v.set_x(x);
  v.set_y(y);
  v.set_z(z);
  return v;
}

Vector3 ToENU(const Vector3& vec) {
  return NewVector3(vec.x(), vec.z(), vec.y());
}

Vector3 ToFLU(const Vector3& vec) {
  return NewVector3(vec.z(), -vec.x(), vec.y());
}

Quaternion ToENU(const Quaternion& q) {
  Quaternion qEnu;
  qEnu.set_x(q.x());
  qEnu.set_y(q.z());
  qEnu.set_z(q.y());
  qEnu.set_w(-q.w());
  return qEnu;
}

Quaternion ToFLU(const Quaternion& q) {
  Quaternion qFlu;
  qFlu.set_x(-q.w());
  qFlu.set_y(q.z());
  qFlu.set_z(-q.x());
  qFlu.set_w(q.y());
  return qFlu;
}

Vector3 operator*(float s, const Vector3& v) {
  return NewVector3(s * v.x(), s * v.y(), s * v.z());
}

Vector3 operator+(const Vector3& a, const Vector3& b) {
  return NewVector3(a.x() + b.x(), a.y() + b.y(), a.z() + b.z());
}

Vector3 operator-(const Vector3& a, const Vector3& b) {
  return NewVector3(a.x() - b.x(), a.y() - b.y(), a.z() - b.z());
}

float Dot(const Vector3& a, const Vector3& b) {
  return a.x() * b.x() + a.y() * b.y() + a.z() * b.z();
}

Vector3 Cross(const Vector3& a, const Vector3& b) {
  float x = a.y() * b.z() - a.z() * b.y();
  float y = a.z() * b.x() - a.x() * b.z();
  float z = a.x() * b.y() - a.y() * b.x();
  return NewVector3(x, y, z);
}

Vector3 Rotate(const Quaternion& q, const Vector3& v) {
  // Separate the scalar and vector parts of the quaternion.
  float w = q.w();
  Vector3 qVec = NewVector3(q.x(), q.y(), q.z());

  return (2.0 * Dot(v, qVec) * qVec) +
         ((w * w - Dot(qVec, qVec)) * v) +
         (2.0 * w * Cross(qVec, v));
}

// Creates a rotation which rotates angle degrees (in radians) around axis.
// The axis should be a unit vector.
Quaternion AngleAxis(float angle, const Vector3 &axis) {
  float sinAngle = sin(0.5f * angle);
  
  Quaternion q;
  q.set_w(cos(0.5f * angle));
  q.set_x(sinAngle * axis.x());
  q.set_y(sinAngle * axis.y());
  q.set_z(sinAngle * axis.z());
  
  return q;
}

Quaternion Inverse(const Quaternion q) {
  Quaternion qInv;
  qInv.set_x(-q.x());
  qInv.set_y(-q.y());
  qInv.set_z(-q.z());
  qInv.set_w(q.w());
  return qInv;
}

Vector3 WorldToLocal(const Quaternion& q, const Vector3& v) {
  return Rotate(Inverse(q), v);
}

// A is angle in degrees from forward, positive CCW. Returns forward, left pair (FLU).
pair<float, float> PolarToCartesian(float r, float a) {
  return make_pair(r * cos(a * M_PI / 180), r * sin(a * M_PI / 180));
}

float Magnitude(const Vector3& v) {
  return sqrt(v.x() * v.x() + v.y() * v.y() + v.z() * v.z());
}

// REF FRAME CONVERSIONS
// Coordinate system conversion is from Metamoto's Right-Up-Forward (RUF) left-handed system to a 
// Forward-Left-Up (FLU) right-handed system.
const geometry_msgs::Vector3 Convert(const Vector3& v) {
  geometry_msgs::Vector3 v3;
  v3.x = v.z();
  v3.y = -v.x();
  v3.z = v.y();
  return v3;
}

const geometry_msgs::Point ConvertPt(const Vector3& v) {
  geometry_msgs::Point point;
  point.x = v.z();
  point.y = -v.x();
  point.z = v.y();
  return point;
}

const geometry_msgs::Quaternion Convert(const Quaternion& q) {
  geometry_msgs::Quaternion rosQ;
  rosQ.x = q.w();
  rosQ.y = -q.z();
  rosQ.z = q.x();
  rosQ.w = -q.y();
  return rosQ;
}

// Parameter utility, finds param ignoring case and underscores.
const google::protobuf::Value* GetParameter(const google::protobuf::Struct& params, const string& name) {
  string newName = name;
  newName.erase(remove(newName.begin(), newName.end(), '_'), newName.end());
  transform(newName.begin(), newName.end(), newName.begin(), ::tolower);
  for (auto const& param : params.fields()) {
    string n = param.first;
    n.erase(remove(n.begin(), n.end(), '_'), n.end());
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    if (n == newName) {
      return &param.second;
    }

    if (param.second.has_struct_value()) {
      auto v = GetParameter(param.second.struct_value(), newName);
      if (v != nullptr) {
        return v;
      }
    }
  }

  return nullptr;
}


// DATA CONVERSIONS MM <-> ROS
bool DataConversions::DoSomethingWithWaypoints(const vector<Waypoint>& waypoints) {
  return true;
}

// This writes an example yaml file that describes the camera intrinsic + extrinsic parameters wrt lidar.
// This kind of file is often required by perceptions stacks such as Autoware's.
// It also records some camera and lidar parameters.
bool DataConversions::WriteSensorCalibration(const TestCase& testCase, const string& filename) {
  auto camera = find_if(testCase.ego_vehicle().sensors().begin(), testCase.ego_vehicle().sensors().end(),
      [] (const Sensor& s) { return s.internal_name() == "camera"; });

  if (camera != testCase.ego_vehicle().sensors().end()) {
    // Record some camera parameters.
    auto params = camera->parameters();
    auto origin = GetParameter(params, "imageOrigin");
    if (origin != nullptr && origin->string_value() != "") {
      _imageOrigin = origin->string_value();
    }
  }

  // Record some lidar parameters.  
  auto lidar = find_if(testCase.ego_vehicle().sensors().begin(), testCase.ego_vehicle().sensors().end(),
      [] (const Sensor& s) { return s.internal_name() == "lidar"; });

  if (lidar == testCase.ego_vehicle().sensors().end()) {
    return false;
  }

  auto params = lidar->parameters();
  const google::protobuf::Value* param;
  _lidarChannels = (param = GetParameter(params, "numberOfChannels")) == nullptr ? 0 : param->number_value();
  _minLidarAngle = (param = GetParameter(params, "minimumVerticalAngle")) == nullptr ? 0 : param->number_value();
  _maxLidarAngle = (param = GetParameter(params, "maximumVerticalAngle")) == nullptr ? 0 : param->number_value();

  if (camera != testCase.ego_vehicle().sensors().end()) {
    // Calculate the extrinsic matrix: rotation+translation of the camera in the lidar frame.
    Quaternion qLid = ToFLU(lidar->pose().orientation());
    tf::Matrix3x3 rLid(tf::Quaternion(qLid.x(), qLid.y(), qLid.z(), qLid.w()));
    Quaternion qCam = ToFLU(camera->pose().orientation());
    tf::Matrix3x3 rCam(tf::Quaternion(qCam.x(), qCam.y(), qCam.z(), qCam.w()));

    ofstream file(filename);
    if (!file.is_open()) {
      cout << "ERROR: failed to open " << filename << endl;
      return false;
    }

    file << "%YAML:1.0" << endl;

    tf::Matrix3x3 r = rLid.inverse() * rCam;
    Vector3 t = ToFLU(camera->pose().position() - lidar->pose().position());

    file << "CameraExtrinsicMat: !!opencv-matrix" << endl
         << "   rows: 4\n   cols: 4\n   dt: d\n   data: ["
         << r[0][0] << ", " << r[0][1] << ",\n       "
         << r[0][2] << ", " << t.x() << ",\n       "
         << r[1][0] << ", " << r[1][1] << ",\n       "
         << r[1][2] << ", " << t.y() << ",\n       "
         << r[2][0] << ", " << r[2][1] << ",\n       "
         << r[2][2] << ", " << t.z() << ", 0., 0., 0., 1. ]" << endl;

    // Compose the camera intrinsic matrix.
    params = camera->parameters();
    float focal = (param = GetParameter(params, "focalLength")) == nullptr ? 0 : param->number_value();
    focal /= (param = GetParameter(params, "pixelSize")) == nullptr ? 1 : param->number_value() * 1000;
    int frameWidth = (param = GetParameter(params, "frameWidth")) == nullptr ? 0 : param->number_value();
    int frameHeight = (param = GetParameter(params, "frameHeight")) == nullptr ? 0 : param->number_value();
    float cX = frameWidth / 2 + 
        (param = GetParameter(params, "principalCxOffset")) == nullptr ? 0 : param->number_value();
    float cY = frameHeight / 2 + 
        (param = GetParameter(params, "principalCyOffset")) == nullptr ? 0 : param->number_value();

    file << "CameraMat: !!opencv-matrix" << endl
         << "   rows: 3\n   cols: 3\n   dt: d\n   data: ["
         << focal << ", 0., " << cX << ", 0.,\n       "
         << focal << ", " << cY << ", 0., 0., 1. ]" << endl;

    // Compose the distortion coefficients vector.
    float k1 = (param = GetParameter(params, "distortionK1")) == nullptr ? 0 : param->number_value();
    float k2 = (param = GetParameter(params, "distortionK2")) == nullptr ? 0 : param->number_value();
    float k3 = (param = GetParameter(params, "distortionK3")) == nullptr ? 0 : param->number_value();
    float t1 = (param = GetParameter(params, "distortionT1")) == nullptr ? 0 : param->number_value();
    float t2 = (param = GetParameter(params, "distortionT2")) == nullptr ? 0 : param->number_value();
    file << "DistCoeff: !!opencv-matrix" << endl
         << "   rows: 1\n   cols: 5\n   dt: d\n   data: ["
         << k1 << ", " << k2 << ",\n       "
         << t1 << ", " << t2 << ",\n       "
         << k3 << " ]" << endl;

    file << "ImageSize: [ " << frameWidth << ", " << frameHeight << " ]" << endl;

    // TODO: figure out this value
    file << "ReprojectionError: 4.0e-01" << endl;

    file.close();
  }

  return true;
}


void DataConversions::ConvertImage(const DataBusMessage& camera) {
  image.header.stamp.fromSec(camera.header().time() + startTimeS);

  image.height = camera.camera().image().height();
  image.width = camera.camera().image().width();
  image.encoding = camera.camera().image().encoding();
  transform(image.encoding.begin(), image.encoding.end(), image.encoding.begin(), ::tolower);
  image.step = camera.camera().image().step();

  if (_imageOrigin == "upper_left") {
    // This is all that is needed if the image is upper-left-origin:
    image.data.assign(camera.camera().image().data().begin(), camera.camera().image().data().end());
  } else {
    // If image is lower-left-origin (default in Unity), flip it by writing rows in reverse:
    image.data.resize(image.height * image.step);
    auto src = camera.camera().image().data().data() + image.step * (image.height - 1);  
    auto dest = image.data.data();
    for (int i = 0; i < image.height; src -= image.step, dest += image.step, ++i) {
      memcpy(dest, src, image.step);
    }
  }
}


void DataConversions::ConvertLidar(const vector<DataBusMessage>& lidars) {
  pointCloud.header.stamp.fromSec(lidars[0].header().time() + startTimeS);
  pointCloud.header.frame_id = "velodyne";
  
  int numPoints = 0;
  for (auto const& lidar : lidars) {
    for (auto const& group : lidar.lidar().groups()) {
      for (auto const& laserReturn : group.returns()) {
        numPoints += laserReturn.ranges_size();
      }
    }
  }
  
  pointCloud.width = numPoints;
  pointCloud.height = 1;
  pointCloud.fields.resize(5); // x,y,z,intensity,ring
  pointCloud.fields[0].name = "x";
  pointCloud.fields[1].name = "y";
  pointCloud.fields[2].name = "z";
  pointCloud.fields[3].name = "intensity";
  pointCloud.fields[4].name = "ring";

  int offset = 0;
  for (int d = 0; d < 4; ++d, offset += 4) {
    pointCloud.fields[d].offset = offset;
    pointCloud.fields[d].datatype = sensor_msgs::PointField::FLOAT32;
    pointCloud.fields[d].count  = 1;
  }
  pointCloud.fields[4].offset = offset;
  pointCloud.fields[4].datatype = sensor_msgs::PointField::UINT16;
  pointCloud.fields[4].count = 1;
  
  pointCloud.point_step = offset + 2;
  pointCloud.row_step   = pointCloud.point_step * pointCloud.width;
  
  pointCloud.data.resize(pointCloud.row_step);
  pointCloud.is_bigendian = false;
  pointCloud.is_dense     = true;

  float ringAngle = (_maxLidarAngle - _minLidarAngle) / (_lidarChannels - 1);
  
  // Get the hit points from the lidar message, convert to FLU and copy them to pointCloud.
  int cp = 0;
  for (auto const& lidar : lidars) {
    for (auto& group : lidar.lidar().groups()) {
      Quaternion channelOrientation = AngleAxis(-group.azimuth_angle() * DEG_2_RAD, NewVector3(0, 0, 1));
      Vector3 direction = Rotate(channelOrientation, NewVector3(1, 0, 0));
      Vector3 left = Rotate(channelOrientation, NewVector3(0, 1, 0));

      for (auto& laserReturn : group.returns()) {
        float elevation = -laserReturn.elevation_angle() * DEG_2_RAD;
        Vector3 rayDirection = Rotate(AngleAxis(elevation, left), direction);
        uint16_t ring = round((laserReturn.elevation_angle() - _minLidarAngle) / ringAngle);

        for (int i = 0; i < laserReturn.ranges_size(); ++i, ++cp) {
          Vector3 hitPoint = laserReturn.ranges()[i] * rayDirection;
          float x = hitPoint.x();
          float y = hitPoint.y();
          float z = hitPoint.z();
          float intensity = laserReturn.intensities()[i]; // * 10.;

          memcpy(&pointCloud.data[cp * pointCloud.point_step + pointCloud.fields[0].offset], &x, 4);
          memcpy(&pointCloud.data[cp * pointCloud.point_step + pointCloud.fields[1].offset], &y, 4);
          memcpy(&pointCloud.data[cp * pointCloud.point_step + pointCloud.fields[2].offset], &z, 4);
          memcpy(&pointCloud.data[cp * pointCloud.point_step + pointCloud.fields[3].offset], &intensity, 4);
          memcpy(&pointCloud.data[cp * pointCloud.point_step + pointCloud.fields[4].offset], &ring, 2);
        }
      }
    }
  }
}


 radar_msgs::RadarProcessedArray DataConversions::ProcessedRadarData(const DataBusMessage& radar){

   radar_msgs::RadarProcessedArray detected_object_array;
   detected_object_array.header.stamp.fromSec(radar.header().time());
   for (auto& object : radar.radar().objects()) {
   radar_msgs::RadarProcessed detected_object;
   detected_object.object_type = object.object_type();
   detected_object.range = object.range();
   detected_object_array.groundtruth.push_back(detected_object);
   }

   return detected_object_array;
} 



 radar_msgs::RadarTrackArray DataConversions::ConvertRadar(const DataBusMessage& radar) {
   radar_msgs::RadarTrackArray array;
   array.header.stamp.fromSec(radar.header().time());
   geometry_msgs::Point32 p;

   for (auto& object : radar.radar().objects()) {
     radar_msgs::RadarTrack track;
     track.track_id = object.internal_id();

     float r = object.range();
     float l = object.length();
     float a = object.angle() * M_PI / 180;
     float da = atan(object.width() / 2 / r);

     p.z = 0;   // setting z = 0 for all points (flat 2D shape)
     p.x = r * cos(a - da);
     p.y = r * sin(a - da);
     track.track_shape.points.push_back(p);   // point 1
     p.x = r * cos(a + da);
     p.y = r * sin(a + da);
     track.track_shape.points.push_back(p);   // point 2
     p.x = (r + l) * cos(a + da);
     p.y = (r + l) * sin(a + da);
     track.track_shape.points.push_back(p);   // point 3
     p.x = (r + l) * cos(a - da);
     p.y = (r + l) * sin(a - da);
     track.track_shape.points.push_back(p);   // point 4

     track.linear_velocity.x = object.velocity_z();
     track.linear_velocity.y = -object.velocity_x();
     track.linear_acceleration.x = object.acceleration_z();
     array.tracks.push_back(track);
   }

   return array;
 }



tf2_msgs::TFMessage DataConversions::ConvertTF(const DataBusMessage& vehicleState) {
  tf2_msgs::TFMessage tf;
  tf.transforms.resize(2);

  // map -> odom is identity
  tf.transforms[0].header.stamp.fromSec(vehicleState.header().time() + startTimeS);
  tf.transforms[0].header.frame_id = "map";
  tf.transforms[0].child_frame_id = "odom";
  tf.transforms[0].transform.translation.x = tf.transforms[0].transform.translation.y = tf.transforms[0].transform.translation.z = 0;
  tf.transforms[0].transform.rotation.x = tf.transforms[0].transform.rotation.y = tf.transforms[0].transform.rotation.z = 0;
  tf.transforms[0].transform.rotation.w = 1;

  // odom -> base_link is true position
  tf.transforms[1].header.stamp.fromSec(vehicleState.header().time() + startTimeS);
  tf.transforms[1].header.frame_id = "odom";
  tf.transforms[1].child_frame_id = "base_link";
  tf.transforms[1].transform.translation = Convert(vehicleState.vehicle_state().pose().position());
  tf.transforms[1].transform.rotation = Convert(vehicleState.vehicle_state().pose().orientation());

  return tf;
}


nav_msgs::Odometry DataConversions::ConvertOdometry(const DataBusMessage& vehicleState) {
  nav_msgs::Odometry odom;
  odom.header.stamp.fromSec(vehicleState.header().time() + startTimeS);
  odom.header.frame_id = "map";
  odom.child_frame_id = "base_link";

  odom.pose.pose.position = ConvertPt(vehicleState.vehicle_state().pose().position());
  odom.pose.pose.orientation = Convert(vehicleState.vehicle_state().pose().orientation());
  odom.pose.covariance = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 
                           0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  odom.twist.twist.linear = Convert(vehicleState.vehicle_state().velocity().linear());
  odom.twist.twist.angular = Convert(vehicleState.vehicle_state().velocity().angular());
  odom.twist.covariance = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  return odom;
}


sensor_msgs::Imu DataConversions::ConvertImu(const DataBusMessage& imu) {
  sensor_msgs::Imu rosImu;
  rosImu.header.stamp.fromSec(imu.header().time() + startTimeS);
  rosImu.angular_velocity = Convert(imu.imu().angular_velocity());
  rosImu.linear_acceleration = Convert(imu.imu().linear_acceleration());
  rosImu.orientation_covariance[0] = -1;  // Indicates orientation not set.
  return rosImu;
}


nmea_msgs::Sentence DataConversions::ConvertGps(const DataBusMessage& gps) {
  // "$GPGGA,004306.40,3514.1513728,N,13700.2659256,E,4,10,0.92,43.6346,M,38.4571,M,1.4,0556*43"
  nmea_msgs::Sentence nmea;

  float time = gps.header().time() + startTimeS;
  nmea.header.stamp.fromSec(time);
  nmea.header.frame_id = "gps";

  stringstream ss;
  
  int hours = (int)(time / 3600);
  int minutes = (int)((time - hours * 3600) / 60);
  float seconds = time - hours * 3600 - minutes * 60;
  
  ss << "$GPGGA," << setfill('0') << setw(2) << hours << setw(2) << minutes 
     << setw(6) << fixed << setprecision(3) << seconds << defaultfloat << setprecision(0) << ",";

  float lat = gps.gps().coordinate().latitude();
  float lon = gps.gps().coordinate().longitude();
  float latMin = (lat - (int)lat) * 60;
  float lonMin = (lon - (int)lon) * 60;

  ss << setw(2) << (int)lat << setw(10) << fixed << setprecision(7) << latMin << ",N," << defaultfloat << setprecision(0);
  ss << setw(3) << (int)lon << setw(10) << fixed << setprecision(7) << lonMin << ",E," << defaultfloat << setprecision(0);

  ss << "4,09,1.06," << fixed << setprecision(4) << gps.gps().coordinate().altitude() << defaultfloat << setprecision(0);
  ss << ",M,38.4572,M,1.0,0556*46";    // TODO fake values and checksum

  nmea.sentence = ss.str();
  return nmea;
}


DataBusMessage DataConversions::ConvertControls(const ros_sut::ControlCommand& ctrlCmd) {
  DataBusMessage message;
  message.mutable_header()->set_time(ctrlCmd.header.stamp.toSec() - startTimeS);
  auto* controls = message.mutable_vehicle_controls();
  controls->mutable_acceleration()->set_value(ctrlCmd.acceleration);
  controls->mutable_steer()->set_value(ctrlCmd.steer);
  controls->mutable_brake()->set_value(ctrlCmd.brake);
  controls->mutable_throttle()->set_value(ctrlCmd.throttle);
  return message;
}


DataBusMessage DataConversions::ConvertControls(const ros_sut::SixChannelControlCommand& ctrlCmd) {
  DataBusMessage message;
  message.mutable_header()->set_time(ctrlCmd.header.stamp.toSec() - startTimeS);
  auto* controls = message.mutable_vehicle_controls();
  controls->mutable_brake()->set_value(ctrlCmd.brake);
  controls->mutable_throttle()->set_value(ctrlCmd.throttle);

  auto* wheel = controls->add_wheel_controls();
  wheel->mutable_angular_velocity()->set_value(ctrlCmd.fl_rpm * M_PI / 30.);
  wheel->mutable_steer_angle()->set_value(-ctrlCmd.fl_steer);
  
  wheel = controls->add_wheel_controls();
  wheel->mutable_angular_velocity()->set_value(ctrlCmd.fr_rpm * M_PI / 30.);
  wheel->mutable_steer_angle()->set_value(-ctrlCmd.fr_steer);

  wheel = controls->add_wheel_controls();
  wheel->mutable_angular_velocity()->set_value(ctrlCmd.rl_rpm * M_PI / 30.);

  wheel = controls->add_wheel_controls();
  wheel->mutable_angular_velocity()->set_value(ctrlCmd.rr_rpm * M_PI / 30.);
  
  return message;
}

