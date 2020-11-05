API_HOME = ../../../API
BUILD_HOME = $(API_HOME)/build
include $(BUILD_HOME)/variables.mk

PROTO_HOME = $(API_HOME)
GRPC_HOME = $(PROTO_HOME)

all: protos 

protos: $(PROTO_PY) $(GRPC_PY)

include $(BUILD_HOME)/rules.mk
