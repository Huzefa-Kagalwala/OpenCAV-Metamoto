# Generates source code from protos
$(GENERATED_DIRECTORY)/%.pb.cc: $(PROTO_HOME)/%.proto
	@mkdir -p $(@D)
	$(PROTOC) --cpp_out=$(GENERATED_DIRECTORY) --proto_path=$(PROTO_HOME) $^

$(GENERATED_DIRECTORY)/%.grpc.pb.cc: $(GRPC_HOME)/%.proto
	@mkdir -p $(@D)
	$(PROTOC) --grpc_out=$(GENERATED_DIRECTORY) --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN) --proto_path=$(GRPC_HOME) $^

/%_pb2.py: $(PROTO_HOME)/%.proto
	@mkdir -p ./$(@D)
	$(PROTOC_PY) --python_out=. --proto_path=$(PROTO_HOME) $^

/%_pb2_grpc.py: $(GRPC_HOME)/%.proto
	@mkdir -p ./$(@D)
	$(PROTOC_PY) --grpc_python_out=. --proto_path=$(GRPC_HOME) $^

# Builds source code
$(OBJECT_DIRECTORY)/%.cc.o: %.cc
	@mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

$(OBJECT_DIRECTORY)/%.cpp.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -rf $(BIN_DIRECTORY) $(OBJECT_DIRECTORY) $(GENERATED_DIRECTORY) $(GENERATED_DIRECTORY_PY)



