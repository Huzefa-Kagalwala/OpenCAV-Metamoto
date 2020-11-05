API_HOME = ../../../API
BUILD_HOME = $(API_HOME)/build
include $(BUILD_HOME)/variables.mk

LIBRARIES += grpc grpc++ protobuf dl
LIBRARY_DIRECTORIES += /usr/local/lib

ifeq ($(OS),Linux)
  LIBRARIES += pthread
endif

ifeq ($(EIGEN_HOME),)
  EIGEN_HOME = /usr/include/eigen3
endif

INCLUDE_DIRECTORIES += $(EIGEN_HOME)

PROTO_HOME = $(API_HOME)
GRPC_HOME = $(PROTO_HOME)

CONTROLLER = $(BIN_DIRECTORY)/convertor

all: $(CONTROLLER)

$(CONTROLLER): $(PROTO_SOURCES) $(GRPC_SOURCES) $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) -o $@ $(OBJECTS) $(LIBRARY_FLAGS)

include $(BUILD_HOME)/rules.mk

