# ROS-based System Under Test

This code is a generic example of a ROS-based integration into Metamoto's simulation as a System Under Test (SUT). It runs as a ROS node and as a Metamoto gRPC ControllerService at the same time. It reads the VehicleState, Camera, Lidar, GPS, and IMU topics from the Metamoto DataBus, converts them to ROS message types, and publishes to ROS topics. The package also contains a "fake" stack ROS node, which publishes a ControlCommand message. This is a placeholder for an actual AV stack that would publish vehicle controls. The SUT node listens for this message, converts it to a Metamoto VehicleControls message, and sends back to the simulation.

For general notes on integrating external code as a SUT see the Getting Started Tutorial in your documentation.

## Key Files & Directories

- `catkin_ws/` Contains the SUT code. Build with `catkin_make`.
- `catkin_ws/src/ros_sut/msg/ControlCommand.msg` This is a simple vehicle control command message published by the fake_stack.
- `catkin_ws/src/ros_sut/src/fake_stack.cc` This is the simple stack placeholder implementation.
- `catkin_ws/src/ros_sut/src/*` The rest of the code is the SUT itself.
- `Dockerfile.kinetic` Builds a Docker image with all dependencies, the Metamoto API (compiled into a C++ library), and the SUT and SUT Connector binaries.  
- `metamoto/`: Contains the Metamoto API Protobuf definitions and the C++ library compiled from them that is used by the SUT (`libmetamoto.so`). Re-build the API C++ library or the SUT Connector binary by running `make clean && make` in the appropriate directory.
- `start.sh`: entry point to launch the SUT ROS node.
- `start-stack.sh`: entry point to launch the fake stack ROS node.

`Dockerfile.kinetic` includes a command to copy this entire directory into the image so all of these files will be available inside the Docker image.

## Build the Docker Image

To build the Docker image make sure you have the Docker service installed and running and run the following command.

`$ docker build . --file Dockerfile.kinetic --tag ros-sut:latest`

This may take ~15-20min because of the various dependencies. After, you should see the repository `ros-sut` with tag `latest` listed when you run `docker images`.

## Local Simulations with the SUT Connector

To speed up the development process you can run the SUT in a local Docker container and connect to a running simulation in the cloud via the SUT Connector tool, which is included in the Docker image built from `Dockerfile.kinetic`.

By running the SUT and SUT Connector in a local container you can execute simulations after making local code changes without having to write those changes to a new Docker image and push it to the cloud.

First, launch a Docker container with terminal access from the image you built above.

`$ docker run -it ros-sut:latest`

You will now be inside the Docker container. Run `ls -la /metamoto` to see all the files and directories of this package that were copied by the Dockerfile.

You can now make changes to the ROS configuration or SUT code within the container. Make sure to re-build the SUT by running `catkin_make` inside `/metamoto/catkin_ws/`.

The `start.sh` script is the entrypoint to running `roscore` and the SUT. You can run it directly, and it should also be the command executed by the simulation engine when the container is run in the Metamoto cloud.

The SUT gRPC server will launch and listen on port 50001.

Finally, we want to launch the SUT Connector at the same time so it can be a bridge between the SUT and the simulation in the cloud. To do so we launch a second terminal into our locally running container and start the SUT Connector there.

```
$ docker ps  # record the container id for the container you started above
$ docker exec -it <container-id> bash

# you are now inside the container
$ cd /metamoto/metamoto/sut_connector
$ bin/sc-client --server-uri <xxx>.metamoto.com:18000 --sut-port 50001 --sut-type 1 --trusted-certs ./roots.pem --username <your email>
```

The SUT Connector will connect to your Metamoto private cloud and provide an ID for your session.

To execute simulations with this locally running SUT, go to a Vector and select an Ego Vehicle which is configured with a SUT-based controller. In the SUT image dropdown that is shown, select the SUT Connector item with the id above.

### Running an AV Stack

The SUT node acts as the bridge between the simulation and your AV stack. To test with a fake stack implementation, run the `start-stack.sh` script, which is identical to `start.sh` except that it launches the `fake_stack` ROS node in the `ros_sut` package instead of the SUT node.

The fake stack listens for `/clock` messages published by the SUT node and responds with a fake `ControlCommand` message (defined in `catkin_ws/src/ros_sut/msg/ControlCommand.msg`) on the `/control_cmd` topic.

You can run the fake stack in a separate terminal into the same container that is running the SUT, or in a new container started from the same Docker image. The latter method illustrates how to run a multi-container setup with a Metamoto simulation. The only thing that needs to be done in this setup is that the URI of the running ROS master (`roscore`) needs to be passed to whichever nodes are not in the same container as the master. The `start.sh` and `start-stack.sh` scripts both look for a ROS master URI as the first argument, in the form `http://172.17.0.3:11311/`, and set it if it is present. Otherwise the scripts start `roscore` on their own.

For example, you can launch `start-stack.sh` (or your own stack) in one container, which will start `roscore`. Look for the output line of the form `ROS_MASTER_URI=http://172.17.0.3:11311/`. Copy the URI, and when starting the SUT node, pass the value:

```
$ ./start.sh http://172.17.0.3:11311/
```

Likewise, you can start the SUT node first, and use its ROS master URI to pass to `start-stack.sh`.

### Mounting a Local Volume onto the Docker Container

Editing code in vim running inside the container can be cumbersome. An alternative is to mount a local directory with the code to a virtual directory in the container when you launch it. Changes to the host files will automatically reflect in the mounted directory and you can then use your local development tools to work on your code.

`$ docker run -it -v <local-path-to-code>:/metamoto-working ros-sut:latest`

Inside the conatiner the directories `/metamoto` and `/metamoto-working` will both be present but the latter will reflect changes made to the files on the host machine and will vanish when you exit the container. After making changes, you can launch the SUT by running `/metamoto-working/start.sh` and the SUT Connector the same way as above. If you intend to push the image for use in cloud simulations, copy `/metamoto-working` to `/metamoto` before exiting or commiting the running container to a new image.

## Cloud Simulations

Simulations running with a container loaded in the cloud will run faster than those running locally and passing data through the SUT Connector. For this you need to push your Docker image to your Metamoto private cloud and set the path to the entry script `start.sh` in the Ego Vehicle controller configuration in Designer.

After you've made desired changes to the SUT code inside the running container, open a new terminal window on your local machine and commit those changes to a new image and push it to the cloud.

```
$ docker commit <container id> <xxx>.metamoto.com:5000/ros-sut:<unique tag>
$ docker login <xxx.metamoto.com:5000>
$ docker push <xxx>.metamoto.com:5000/ros-sut:<unique tag>
```

The unique tag will allow you to keep track of your changes and access the different images in Director.

Then, inside Designer, attach a SUT-based controller to your Ego Vehicle. In the `command` field enter the full path to the entry point script `/metamoto/start.sh`.

Finally, in a Vector, when you select your Ego Vehicle choose your docker image and tag in the SUT image dropdown menu.