API_HOME = ../api
BUILD_HOME = $(API_HOME)/build
include $(BUILD_HOME)/variables.mk

LIBRARIES += grpc grpc++ protobuf dl crypto ssl curl
LIBRARY_DIRECTORIES += /usr/local/lib

ifeq ($(OS),Linux)
  LIBRARIES += pthread
endif

PROTO_HOME = $(API_HOME)
GRPC_HOME = $(PROTO_HOME)

SC_CLIENT = $(BIN_DIRECTORY)/sc-client

all: $(SC_CLIENT)

$(SC_CLIENT): $(PROTO_SOURCES) $(GRPC_SOURCES) $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) -o $@ $(OBJECTS) $(LIBRARY_FLAGS)

include $(BUILD_HOME)/rules.mk

