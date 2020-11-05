# gRPC parent docker image
FROM grpc/cxx:1.12.0

WORKDIR /metamoto

# Copy the API and SUT directories
COPY API API
COPY SUT/cpp SUT/cpp

# Build the SUT
RUN cd SUT/cpp && make clean && make

# Run commands on container launch here.
# Commented out because in the cloud, this is run by Metamoto orchestration.
# CMD /metamoto/SUT/cpp/bin/controller -port 50001
