// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: metamoto/services/map.proto

#include "metamoto/services/map.pb.h"
#include "metamoto/services/map.grpc.pb.h"

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

static const char* Map_method_names[] = {
  "/metamoto.services.Map/GetRoadNetwork",
  "/metamoto.services.Map/ToRoadPoint",
  "/metamoto.services.Map/ToWorldPoint",
  "/metamoto.services.Map/GetHeading",
  "/metamoto.services.Map/GetPath",
};

std::unique_ptr< Map::Stub> Map::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Map::Stub> stub(new Map::Stub(channel));
  return stub;
}

Map::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetRoadNetwork_(Map_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ToRoadPoint_(Map_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ToWorldPoint_(Map_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetHeading_(Map_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPath_(Map_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Map::Stub::GetRoadNetwork(::grpc::ClientContext* context, const ::metamoto::services::MapGetRoadNetworkRequest& request, ::metamoto::services::MapGetRoadNetworkReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetRoadNetwork_, context, request, response);
}

void Map::Stub::experimental_async::GetRoadNetwork(::grpc::ClientContext* context, const ::metamoto::services::MapGetRoadNetworkRequest* request, ::metamoto::services::MapGetRoadNetworkReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetRoadNetwork_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetRoadNetworkReply>* Map::Stub::AsyncGetRoadNetworkRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetRoadNetworkRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetRoadNetworkReply>::Create(channel_.get(), cq, rpcmethod_GetRoadNetwork_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetRoadNetworkReply>* Map::Stub::PrepareAsyncGetRoadNetworkRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetRoadNetworkRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetRoadNetworkReply>::Create(channel_.get(), cq, rpcmethod_GetRoadNetwork_, context, request, false);
}

::grpc::Status Map::Stub::ToRoadPoint(::grpc::ClientContext* context, const ::metamoto::services::MapToRoadPointRequest& request, ::metamoto::services::MapToRoadPointReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ToRoadPoint_, context, request, response);
}

void Map::Stub::experimental_async::ToRoadPoint(::grpc::ClientContext* context, const ::metamoto::services::MapToRoadPointRequest* request, ::metamoto::services::MapToRoadPointReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ToRoadPoint_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapToRoadPointReply>* Map::Stub::AsyncToRoadPointRaw(::grpc::ClientContext* context, const ::metamoto::services::MapToRoadPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapToRoadPointReply>::Create(channel_.get(), cq, rpcmethod_ToRoadPoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapToRoadPointReply>* Map::Stub::PrepareAsyncToRoadPointRaw(::grpc::ClientContext* context, const ::metamoto::services::MapToRoadPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapToRoadPointReply>::Create(channel_.get(), cq, rpcmethod_ToRoadPoint_, context, request, false);
}

::grpc::Status Map::Stub::ToWorldPoint(::grpc::ClientContext* context, const ::metamoto::services::MapToWorldPointRequest& request, ::metamoto::services::MapToWorldPointReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ToWorldPoint_, context, request, response);
}

void Map::Stub::experimental_async::ToWorldPoint(::grpc::ClientContext* context, const ::metamoto::services::MapToWorldPointRequest* request, ::metamoto::services::MapToWorldPointReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ToWorldPoint_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapToWorldPointReply>* Map::Stub::AsyncToWorldPointRaw(::grpc::ClientContext* context, const ::metamoto::services::MapToWorldPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapToWorldPointReply>::Create(channel_.get(), cq, rpcmethod_ToWorldPoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapToWorldPointReply>* Map::Stub::PrepareAsyncToWorldPointRaw(::grpc::ClientContext* context, const ::metamoto::services::MapToWorldPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapToWorldPointReply>::Create(channel_.get(), cq, rpcmethod_ToWorldPoint_, context, request, false);
}

::grpc::Status Map::Stub::GetHeading(::grpc::ClientContext* context, const ::metamoto::services::MapGetHeadingRequest& request, ::metamoto::services::MapGetHeadingReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetHeading_, context, request, response);
}

void Map::Stub::experimental_async::GetHeading(::grpc::ClientContext* context, const ::metamoto::services::MapGetHeadingRequest* request, ::metamoto::services::MapGetHeadingReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetHeading_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetHeadingReply>* Map::Stub::AsyncGetHeadingRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetHeadingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetHeadingReply>::Create(channel_.get(), cq, rpcmethod_GetHeading_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetHeadingReply>* Map::Stub::PrepareAsyncGetHeadingRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetHeadingRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetHeadingReply>::Create(channel_.get(), cq, rpcmethod_GetHeading_, context, request, false);
}

::grpc::Status Map::Stub::GetPath(::grpc::ClientContext* context, const ::metamoto::services::MapGetPathRequest& request, ::metamoto::services::MapGetPathReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetPath_, context, request, response);
}

void Map::Stub::experimental_async::GetPath(::grpc::ClientContext* context, const ::metamoto::services::MapGetPathRequest* request, ::metamoto::services::MapGetPathReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPath_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetPathReply>* Map::Stub::AsyncGetPathRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetPathReply>::Create(channel_.get(), cq, rpcmethod_GetPath_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::MapGetPathReply>* Map::Stub::PrepareAsyncGetPathRaw(::grpc::ClientContext* context, const ::metamoto::services::MapGetPathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::MapGetPathReply>::Create(channel_.get(), cq, rpcmethod_GetPath_, context, request, false);
}

Map::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Map_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Map::Service, ::metamoto::services::MapGetRoadNetworkRequest, ::metamoto::services::MapGetRoadNetworkReply>(
          std::mem_fn(&Map::Service::GetRoadNetwork), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Map_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Map::Service, ::metamoto::services::MapToRoadPointRequest, ::metamoto::services::MapToRoadPointReply>(
          std::mem_fn(&Map::Service::ToRoadPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Map_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Map::Service, ::metamoto::services::MapToWorldPointRequest, ::metamoto::services::MapToWorldPointReply>(
          std::mem_fn(&Map::Service::ToWorldPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Map_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Map::Service, ::metamoto::services::MapGetHeadingRequest, ::metamoto::services::MapGetHeadingReply>(
          std::mem_fn(&Map::Service::GetHeading), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Map_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Map::Service, ::metamoto::services::MapGetPathRequest, ::metamoto::services::MapGetPathReply>(
          std::mem_fn(&Map::Service::GetPath), this)));
}

Map::Service::~Service() {
}

::grpc::Status Map::Service::GetRoadNetwork(::grpc::ServerContext* context, const ::metamoto::services::MapGetRoadNetworkRequest* request, ::metamoto::services::MapGetRoadNetworkReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Map::Service::ToRoadPoint(::grpc::ServerContext* context, const ::metamoto::services::MapToRoadPointRequest* request, ::metamoto::services::MapToRoadPointReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Map::Service::ToWorldPoint(::grpc::ServerContext* context, const ::metamoto::services::MapToWorldPointRequest* request, ::metamoto::services::MapToWorldPointReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Map::Service::GetHeading(::grpc::ServerContext* context, const ::metamoto::services::MapGetHeadingRequest* request, ::metamoto::services::MapGetHeadingReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Map::Service::GetPath(::grpc::ServerContext* context, const ::metamoto::services::MapGetPathRequest* request, ::metamoto::services::MapGetPathReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace metamoto
}  // namespace services
