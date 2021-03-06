// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: metamoto/services/ray_tracer.proto

#include "metamoto/services/ray_tracer.pb.h"
#include "metamoto/services/ray_tracer.grpc.pb.h"

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

static const char* RayTracer_method_names[] = {
  "/metamoto.services.RayTracer/SetPatterns",
  "/metamoto.services.RayTracer/Trace",
};

std::unique_ptr< RayTracer::Stub> RayTracer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RayTracer::Stub> stub(new RayTracer::Stub(channel));
  return stub;
}

RayTracer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetPatterns_(RayTracer_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Trace_(RayTracer_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RayTracer::Stub::SetPatterns(::grpc::ClientContext* context, const ::metamoto::services::RayTracerSetPatternsRequest& request, ::metamoto::services::RayTracerSetPatternsReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetPatterns_, context, request, response);
}

void RayTracer::Stub::experimental_async::SetPatterns(::grpc::ClientContext* context, const ::metamoto::services::RayTracerSetPatternsRequest* request, ::metamoto::services::RayTracerSetPatternsReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPatterns_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::RayTracerSetPatternsReply>* RayTracer::Stub::AsyncSetPatternsRaw(::grpc::ClientContext* context, const ::metamoto::services::RayTracerSetPatternsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::RayTracerSetPatternsReply>::Create(channel_.get(), cq, rpcmethod_SetPatterns_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::RayTracerSetPatternsReply>* RayTracer::Stub::PrepareAsyncSetPatternsRaw(::grpc::ClientContext* context, const ::metamoto::services::RayTracerSetPatternsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::RayTracerSetPatternsReply>::Create(channel_.get(), cq, rpcmethod_SetPatterns_, context, request, false);
}

::grpc::Status RayTracer::Stub::Trace(::grpc::ClientContext* context, const ::metamoto::services::RayTracerTraceRequest& request, ::metamoto::services::RayTracerTraceReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Trace_, context, request, response);
}

void RayTracer::Stub::experimental_async::Trace(::grpc::ClientContext* context, const ::metamoto::services::RayTracerTraceRequest* request, ::metamoto::services::RayTracerTraceReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Trace_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::RayTracerTraceReply>* RayTracer::Stub::AsyncTraceRaw(::grpc::ClientContext* context, const ::metamoto::services::RayTracerTraceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::RayTracerTraceReply>::Create(channel_.get(), cq, rpcmethod_Trace_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::RayTracerTraceReply>* RayTracer::Stub::PrepareAsyncTraceRaw(::grpc::ClientContext* context, const ::metamoto::services::RayTracerTraceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::RayTracerTraceReply>::Create(channel_.get(), cq, rpcmethod_Trace_, context, request, false);
}

RayTracer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RayTracer_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RayTracer::Service, ::metamoto::services::RayTracerSetPatternsRequest, ::metamoto::services::RayTracerSetPatternsReply>(
          std::mem_fn(&RayTracer::Service::SetPatterns), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RayTracer_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RayTracer::Service, ::metamoto::services::RayTracerTraceRequest, ::metamoto::services::RayTracerTraceReply>(
          std::mem_fn(&RayTracer::Service::Trace), this)));
}

RayTracer::Service::~Service() {
}

::grpc::Status RayTracer::Service::SetPatterns(::grpc::ServerContext* context, const ::metamoto::services::RayTracerSetPatternsRequest* request, ::metamoto::services::RayTracerSetPatternsReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RayTracer::Service::Trace(::grpc::ServerContext* context, const ::metamoto::services::RayTracerTraceRequest* request, ::metamoto::services::RayTracerTraceReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace metamoto
}  // namespace services

