// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: metamoto/services/system.proto

#include "metamoto/services/system.pb.h"
#include "metamoto/services/system.grpc.pb.h"

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

static const char* System_method_names[] = {
  "/metamoto.services.System/GetResultsSize",
};

std::unique_ptr< System::Stub> System::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< System::Stub> stub(new System::Stub(channel));
  return stub;
}

System::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetResultsSize_(System_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status System::Stub::GetResultsSize(::grpc::ClientContext* context, const ::metamoto::services::SystemGetResultsSizeRequest& request, ::metamoto::services::SystemGetResultsSizeReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetResultsSize_, context, request, response);
}

void System::Stub::experimental_async::GetResultsSize(::grpc::ClientContext* context, const ::metamoto::services::SystemGetResultsSizeRequest* request, ::metamoto::services::SystemGetResultsSizeReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetResultsSize_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SystemGetResultsSizeReply>* System::Stub::AsyncGetResultsSizeRaw(::grpc::ClientContext* context, const ::metamoto::services::SystemGetResultsSizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SystemGetResultsSizeReply>::Create(channel_.get(), cq, rpcmethod_GetResultsSize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::SystemGetResultsSizeReply>* System::Stub::PrepareAsyncGetResultsSizeRaw(::grpc::ClientContext* context, const ::metamoto::services::SystemGetResultsSizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::SystemGetResultsSizeReply>::Create(channel_.get(), cq, rpcmethod_GetResultsSize_, context, request, false);
}

System::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      System_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< System::Service, ::metamoto::services::SystemGetResultsSizeRequest, ::metamoto::services::SystemGetResultsSizeReply>(
          std::mem_fn(&System::Service::GetResultsSize), this)));
}

System::Service::~Service() {
}

::grpc::Status System::Service::GetResultsSize(::grpc::ServerContext* context, const ::metamoto::services::SystemGetResultsSizeRequest* request, ::metamoto::services::SystemGetResultsSizeReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace metamoto
}  // namespace services

