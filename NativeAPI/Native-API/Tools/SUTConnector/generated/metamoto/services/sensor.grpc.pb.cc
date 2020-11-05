// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: metamoto/services/sensor.proto

#include "metamoto/services/sensor.pb.h"
#include "metamoto/services/sensor.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace metamoto {
namespace services {

static const char* Sensor_method_names[] = {
  "/metamoto.services.Sensor/Setup",
  "/metamoto.services.Sensor/Initialize",
  "/metamoto.services.Sensor/Update",
  "/metamoto.services.Sensor/Close",
};

std::unique_ptr< Sensor::Stub> Sensor::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Sensor::Stub> stub(new Sensor::Stub(channel));
  return stub;
}

Sensor::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Setup_(Sensor_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Initialize_(Sensor_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Update_(Sensor_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Close_(Sensor_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Sensor::Stub::Setup(::grpc::ClientContext* context, const ::metamoto::services::SensorSetupRequest& request, ::metamoto::services::SensorSetupReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Setup_, context, request, response);
}

void Sensor::Stub::experimental_async::Setup(::grpc::ClientContext* context, const ::metamoto::services::SensorSetupRequest* request, ::metamoto::services::SensorSetupReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Setup_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorSetupReply>* Sensor::Stub::AsyncSetupRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorSetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorSetupReply>::Create(channel_.get(), cq, rpcmethod_Setup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorSetupReply>* Sensor::Stub::PrepareAsyncSetupRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorSetupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorSetupReply>::Create(channel_.get(), cq, rpcmethod_Setup_, context, request, false);
}

::grpc::Status Sensor::Stub::Initialize(::grpc::ClientContext* context, const ::metamoto::services::SensorInitializeRequest& request, ::metamoto::services::SensorInitializeReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Initialize_, context, request, response);
}

void Sensor::Stub::experimental_async::Initialize(::grpc::ClientContext* context, const ::metamoto::services::SensorInitializeRequest* request, ::metamoto::services::SensorInitializeReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Initialize_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorInitializeReply>* Sensor::Stub::AsyncInitializeRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorInitializeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorInitializeReply>::Create(channel_.get(), cq, rpcmethod_Initialize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorInitializeReply>* Sensor::Stub::PrepareAsyncInitializeRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorInitializeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorInitializeReply>::Create(channel_.get(), cq, rpcmethod_Initialize_, context, request, false);
}

::grpc::Status Sensor::Stub::Update(::grpc::ClientContext* context, const ::metamoto::services::SensorUpdateRequest& request, ::metamoto::services::SensorUpdateReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Update_, context, request, response);
}

void Sensor::Stub::experimental_async::Update(::grpc::ClientContext* context, const ::metamoto::services::SensorUpdateRequest* request, ::metamoto::services::SensorUpdateReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorUpdateReply>* Sensor::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorUpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorUpdateReply>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorUpdateReply>* Sensor::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorUpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorUpdateReply>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, false);
}

::grpc::Status Sensor::Stub::Close(::grpc::ClientContext* context, const ::metamoto::services::SensorCloseRequest& request, ::metamoto::services::SensorCloseReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

void Sensor::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::metamoto::services::SensorCloseRequest* request, ::metamoto::services::SensorCloseReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorCloseReply>* Sensor::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorCloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorCloseReply>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SensorCloseReply>* Sensor::Stub::PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::metamoto::services::SensorCloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SensorCloseReply>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, false);
}

Sensor::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Sensor_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Sensor::Service, ::metamoto::services::SensorSetupRequest, ::metamoto::services::SensorSetupReply>(
          std::mem_fn(&Sensor::Service::Setup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Sensor_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Sensor::Service, ::metamoto::services::SensorInitializeRequest, ::metamoto::services::SensorInitializeReply>(
          std::mem_fn(&Sensor::Service::Initialize), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Sensor_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Sensor::Service, ::metamoto::services::SensorUpdateRequest, ::metamoto::services::SensorUpdateReply>(
          std::mem_fn(&Sensor::Service::Update), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Sensor_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Sensor::Service, ::metamoto::services::SensorCloseRequest, ::metamoto::services::SensorCloseReply>(
          std::mem_fn(&Sensor::Service::Close), this)));
}

Sensor::Service::~Service() {
}

::grpc::Status Sensor::Service::Setup(::grpc::ServerContext* context, const ::metamoto::services::SensorSetupRequest* request, ::metamoto::services::SensorSetupReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Sensor::Service::Initialize(::grpc::ServerContext* context, const ::metamoto::services::SensorInitializeRequest* request, ::metamoto::services::SensorInitializeReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Sensor::Service::Update(::grpc::ServerContext* context, const ::metamoto::services::SensorUpdateRequest* request, ::metamoto::services::SensorUpdateReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Sensor::Service::Close(::grpc::ServerContext* context, const ::metamoto::services::SensorCloseRequest* request, ::metamoto::services::SensorCloseReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace metamoto
}  // namespace services

