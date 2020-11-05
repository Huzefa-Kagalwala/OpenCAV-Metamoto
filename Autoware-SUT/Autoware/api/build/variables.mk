UNAME = $(shell uname | cut -f 1 -d_)
ifeq ($(UNAME),Linux)
  OS = Linux
  CXX = g++
else
ifeq ($(UNAME),Darwin)
  OS = MacOS
  CXX = xcrun clang++
else
  $(error Architecture not supported)
endif
endif

GENERATED_DIRECTORY = generated
GENERATED_DIRECTORY_PY = metamoto
OBJECT_DIRECTORY = obj
BIN_DIRECTORY = bin

SOURCE_DIRECTORIES = .
INCLUDE_DIRECTORIES = . $(GENERATED_DIRECTORY)
LIBRARY_DIRECTORIES = 
LIBRARIES = 

INCLUDE_FLAGS = $(foreach element,$(INCLUDE_DIRECTORIES),-I$(element))
LIBRARY_FLAGS  = $(foreach element,$(LIBRARY_DIRECTORIES),-L$(element))
LIBRARY_FLAGS += $(foreach element,$(LIBRARIES),-l$(element))

CXX_FLAGS = $(INCLUDE_FLAGS) -O3 -std=c++14

PROTOC = protoc
PROTOC_PY = python -m grpc_tools.protoc
GRPC_CPP_PLUGIN = `which grpc_cpp_plugin`

# Clear PROTO_DIRECTORIES and GRPC_DIRECTORIES in Makefile to disable
PROTO_DIRECTORIES = metamoto/types metamoto/messages metamoto/services
GRPC_DIRECTORIES = metamoto/services

PROTOS = $(foreach directory,$(PROTO_DIRECTORIES),$(wildcard $(PROTO_HOME)/$(directory)/*.proto))
GRPCS = $(foreach directory,$(GRPC_DIRECTORIES),$(wildcard $(GRPC_HOME)/$(directory)/*.proto))

PROTO_SOURCES = $(patsubst $(PROTO_HOME)/%,$(GENERATED_DIRECTORY)/%,$(PROTOS:.proto=.pb.cc))
GRPC_SOURCES = $(patsubst $(GRPC_HOME)/%,$(GENERATED_DIRECTORY)/%,$(GRPCS:.proto=.grpc.pb.cc))

PROTO_PY = $(patsubst $(PROTO_HOME)/%,/%,$(PROTOS:.proto=_pb2.py))
GRPC_PY = $(patsubst $(GRPC_HOME)/%,/%,$(GRPCS:.proto=_pb2_grpc.py))

SOURCES += $(PROTO_SOURCES) $(GRPC_SOURCES)
SOURCES += $(foreach directory,$(SOURCE_DIRECTORIES),$(wildcard $(directory)/*.c*))

OBJECTS += $(filter %.o, $(patsubst %,$(OBJECT_DIRECTORY)/%,$(SOURCES:.cc=.cc.o)))
OBJECTS += $(filter %.o, $(patsubst %,$(OBJECT_DIRECTORY)/%,$(SOURCES:.cpp=.cpp.o)))


