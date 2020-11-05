# gRPC parent docker image
FROM grpc/cxx:1.12.0

RUN apt-get update && apt-get -y install make vim zlib1g-dev lsb-release

WORKDIR /metamoto

RUN curl -0L http://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz | tar xz && mv eigen-* /usr/include/eigen3

# Copy the SUT files and dependencies into the image
COPY *.h /metamoto/
COPY *.cc /metamoto/
COPY API /metamoto/API
COPY Makefile /metamoto/
COPY nlohmann /metamoto/nlohmann

# Set the library path and build the SUT
#RUN cd /metamoto && make clean && make -j 4
