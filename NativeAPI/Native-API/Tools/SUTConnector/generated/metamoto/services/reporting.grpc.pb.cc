// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: metamoto/services/reporting.proto

#include "metamoto/services/reporting.pb.h"
#include "metamoto/services/reporting.grpc.pb.h"

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

static const char* Reporting_method_names[] = {
  "/metamoto.services.Reporting/AddTimeSeriesValue",
  "/metamoto.services.Reporting/Log",
  "/metamoto.services.Reporting/ReportEvent",
  "/metamoto.services.Reporting/Visualize",
};

std::unique_ptr< Reporting::Stub> Reporting::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Reporting::Stub> stub(new Reporting::Stub(channel));
  return stub;
}

Reporting::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AddTimeSeriesValue_(Reporting_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Log_(Reporting_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReportEvent_(Reporting_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Visualize_(Reporting_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Reporting::Stub::AddTimeSeriesValue(::grpc::ClientContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest& request, ::metamoto::services::ReportingAddTimeSeriesValueReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddTimeSeriesValue_, context, request, response);
}

void Reporting::Stub::experimental_async::AddTimeSeriesValue(::grpc::ClientContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest* request, ::metamoto::services::ReportingAddTimeSeriesValueReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddTimeSeriesValue_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingAddTimeSeriesValueReply>* Reporting::Stub::AsyncAddTimeSeriesValueRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingAddTimeSeriesValueReply>::Create(channel_.get(), cq, rpcmethod_AddTimeSeriesValue_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingAddTimeSeriesValueReply>* Reporting::Stub::PrepareAsyncAddTimeSeriesValueRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingAddTimeSeriesValueReply>::Create(channel_.get(), cq, rpcmethod_AddTimeSeriesValue_, context, request, false);
}

::grpc::Status Reporting::Stub::Log(::grpc::ClientContext* context, const ::metamoto::services::ReportingLogRequest& request, ::metamoto::services::ReportingLogReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Log_, context, request, response);
}

void Reporting::Stub::experimental_async::Log(::grpc::ClientContext* context, const ::metamoto::services::ReportingLogRequest* request, ::metamoto::services::ReportingLogReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Log_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingLogReply>* Reporting::Stub::AsyncLogRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingLogRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingLogReply>::Create(channel_.get(), cq, rpcmethod_Log_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingLogReply>* Reporting::Stub::PrepareAsyncLogRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingLogRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingLogReply>::Create(channel_.get(), cq, rpcmethod_Log_, context, request, false);
}

::grpc::Status Reporting::Stub::ReportEvent(::grpc::ClientContext* context, const ::metamoto::services::ReportingReportEventRequest& request, ::metamoto::services::ReportingReportEventReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ReportEvent_, context, request, response);
}

void Reporting::Stub::experimental_async::ReportEvent(::grpc::ClientContext* context, const ::metamoto::services::ReportingReportEventRequest* request, ::metamoto::services::ReportingReportEventReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ReportEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingReportEventReply>* Reporting::Stub::AsyncReportEventRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingReportEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingReportEventReply>::Create(channel_.get(), cq, rpcmethod_ReportEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingReportEventReply>* Reporting::Stub::PrepareAsyncReportEventRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingReportEventRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingReportEventReply>::Create(channel_.get(), cq, rpcmethod_ReportEvent_, context, request, false);
}

::grpc::Status Reporting::Stub::Visualize(::grpc::ClientContext* context, const ::metamoto::services::ReportingVisualizeRequest& request, ::metamoto::services::ReportingVisualizeReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Visualize_, context, request, response);
}

void Reporting::Stub::experimental_async::Visualize(::grpc::ClientContext* context, const ::metamoto::services::ReportingVisualizeRequest* request, ::metamoto::services::ReportingVisualizeReply* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Visualize_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingVisualizeReply>* Reporting::Stub::AsyncVisualizeRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingVisualizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingVisualizeReply>::Create(channel_.get(), cq, rpcmethod_Visualize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::metamoto::services::ReportingVisualizeReply>* Reporting::Stub::PrepareAsyncVisualizeRaw(::grpc::ClientContext* context, const ::metamoto::services::ReportingVisualizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::metamoto::services::ReportingVisualizeReply>::Create(channel_.get(), cq, rpcmethod_Visualize_, context, request, false);
}

Reporting::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Reporting_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Reporting::Service, ::metamoto::services::ReportingAddTimeSeriesValueRequest, ::metamoto::services::ReportingAddTimeSeriesValueReply>(
          std::mem_fn(&Reporting::Service::AddTimeSeriesValue), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Reporting_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Reporting::Service, ::metamoto::services::ReportingLogRequest, ::metamoto::services::ReportingLogReply>(
          std::mem_fn(&Reporting::Service::Log), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Reporting_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Reporting::Service, ::metamoto::services::ReportingReportEventRequest, ::metamoto::services::ReportingReportEventReply>(
          std::mem_fn(&Reporting::Service::ReportEvent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Reporting_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Reporting::Service, ::metamoto::services::ReportingVisualizeRequest, ::metamoto::services::ReportingVisualizeReply>(
          std::mem_fn(&Reporting::Service::Visualize), this)));
}

Reporting::Service::~Service() {
}

::grpc::Status Reporting::Service::AddTimeSeriesValue(::grpc::ServerContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest* request, ::metamoto::services::ReportingAddTimeSeriesValueReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Reporting::Service::Log(::grpc::ServerContext* context, const ::metamoto::services::ReportingLogRequest* request, ::metamoto::services::ReportingLogReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Reporting::Service::ReportEvent(::grpc::ServerContext* context, const ::metamoto::services::ReportingReportEventRequest* request, ::metamoto::services::ReportingReportEventReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Reporting::Service::Visualize(::grpc::ServerContext* context, const ::metamoto::services::ReportingVisualizeRequest* request, ::metamoto::services::ReportingVisualizeReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace metamoto
}  // namespace services

