API_HOME = ./api
BUILD_HOME = $(API_HOME)/build
include $(BUILD_HOME)/variables.mk

CXX_FLAGS += -fPIC

LIBRARIES += grpc grpc++ protobuf dl
LIBRARY_DIRECTORIES += /usr/local/lib

ifeq ($(OS),Linux)
  LIBRARIES += pthread
endif

PROTO_HOME = $(API_HOME)
GRPC_HOME = $(PROTO_HOME)

CONTROLLER = $(BIN_DIRECTORY)/libmetamoto.so

all: $(CONTROLLER)

$(CONTROLLER): $(PROTO_SOURCES) $(GRPC_SOURCES) $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) -o $@ $(OBJECTS) $(LIBRARY_FLAGS) -shared

include $(BUILD_HOME)/rules.mk

