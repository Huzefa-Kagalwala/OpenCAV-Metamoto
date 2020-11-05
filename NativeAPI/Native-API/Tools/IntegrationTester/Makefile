API_HOME = ../../API
BUILD_HOME = $(API_HOME)/build
include $(BUILD_HOME)/variables.mk

LIBRARIES += grpc grpc++ protobuf dl
LIBRARY_DIRECTORIES += /usr/local/lib

ifeq ($(OS),Linux)
  LIBRARIES += pthread
endif

PROTO_HOME = $(API_HOME)
GRPC_HOME = $(PROTO_HOME)

INTEGRATION_TESTER = $(BIN_DIRECTORY)/integration-tester

all: $(INTEGRATION_TESTER)

$(INTEGRATION_TESTER): $(PROTO_SOURCES) $(GRPC_SOURCES) $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) -o $@ $(OBJECTS) $(LIBRARY_FLAGS)

include $(BUILD_HOME)/rules.mk

