#include <exception>
#include "data_bus_client.h"

using namespace std;
using namespace metamoto::messages;
using namespace metamoto::services;
using metamoto::types::NormalDistribution;


bool DataBusClient::Publish(const string& topic, const string& writerName) {
  DataBusPublishRequest request;
  DataBusPublishReply reply;
  
  grpc::ClientContext context;
  request.mutable_latency()->set_mean(0.1);
  request.mutable_latency()->set_std_dev(0.04);
  request.set_topic(topic);
  request.set_writer_name(writerName);
  request.set_ego_vehicle_id(_egoVehicleId);
  grpc::Status status;

  try {
    status = _stub->Publish(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false;
  }
  
  if (status.ok()) {
    cout << "DataBus Publish to topic " << topic << "." << endl;
    return true;
  } else {
    cout << "DataBus Publish failed to topic " << topic << ": " << status.error_message() << endl;
    return false;
  }
}

bool DataBusClient::Subscribe(const string& topic, const string& readerName) {
  DataBusSubscribeRequest request;
  DataBusSubscribeReply reply;

  grpc::ClientContext context;
  request.set_topic(topic);
  request.set_reader_name(readerName);
  request.set_ego_vehicle_id(_egoVehicleId);
  
  grpc::Status status = _stub->Subscribe(&context, request, &reply);

  if (status.ok()) {
    cout << "Subscribed to dataBus topic " << topic << "." << endl;
    return true;
  } else {
    cout << "Failed to Subscribe to dataBus topic " << topic << ": " << status.error_message() << endl;
    return false;
  }
}

bool DataBusClient::Write(const string& topic, const string& writerName, const DataBusMessage& message) {
  DataBusWriteRequest request;
  DataBusWriteReply reply;

  grpc::ClientContext context;
  request.set_topic(topic);
  request.set_writer_name(writerName);
  request.set_ego_vehicle_id(_egoVehicleId);
  request.mutable_message()->CopyFrom(message);
  
  grpc::Status status = _stub->Write(&context, request, &reply);

  if (status.ok()) {
    cout << "DataBus write for topic " << topic << "." << endl;
    return true;
  } else {
    cout << "DataBus Write failed for topic " << topic << ": " << status.error_message() << endl;
    return false;
  }
}

unique_ptr<DataBusMessage> DataBusClient::Read(const string& topic, 
                                               const string& readerName, 
                                               double time) {
  DataBusReadRequest request;
  DataBusReadReply reply;

  grpc::ClientContext context;
  request.set_topic(topic);
  request.set_time(time);
  request.set_reader_name(readerName);
  request.set_ego_vehicle_id(_egoVehicleId);

  grpc::Status status = _stub->Read(&context, request, &reply);

  if (status.ok()) {
    cout << "DataBus Read for topic " << topic << "." << endl;
    return unique_ptr<DataBusMessage>(new DataBusMessage(reply.message()));
  } else {
    cout << "DataBus Read failed for topic " << topic << ": " << status.error_message() << endl;
    return nullptr;
  }
}

unique_ptr<vector<DataBusMessage>> DataBusClient::ReadAll(const string& topic, 
                                                          const string& readerName, 
                                                          double time) {
  DataBusReadAllRequest request;
  DataBusReadAllReply reply;

  grpc::ClientContext context;
  request.set_topic(topic);
  request.set_time(time);
  request.set_reader_name(readerName);
  request.set_ego_vehicle_id(_egoVehicleId);

  grpc::Status status = _stub->ReadAll(&context, request, &reply);

  if (status.ok()) {
    cout << "DataBus ReadAll." << endl;
    return unique_ptr<vector<DataBusMessage>>(new vector<DataBusMessage>(reply.messages().begin(),
                                                                         reply.messages().end()));
  } else {
    cout << "DataBus ReadAll failed: " << status.error_message() << endl;
    return nullptr;
  }
}

unique_ptr<DataBusMessage> DataBusClient::ReadLast(const string& topic, 
                                                   const string& readerName, 
                                                   double time) {
  DataBusReadLastRequest request;
  DataBusReadLastReply reply;

  grpc::ClientContext context;
  request.set_topic(topic);
  request.set_time(time);
  request.set_reader_name(readerName);
  request.set_ego_vehicle_id(_egoVehicleId);

  grpc::Status status = _stub->ReadLast(&context, request, &reply);

  if (status.ok()) {
    cout << "DataBus ReadLast for topic " << topic << "." << endl;
    return unique_ptr<DataBusMessage>(new DataBusMessage(reply.message()));
  } else {
    cout << "DataBus ReadLast failed for topic " << topic << ": " << status.error_message() << endl;
    return nullptr;
  }
}
