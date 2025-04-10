# Distributed Coordination System

KGPKeeper is a c++ based distributed coordination service

## Overview


This project implements a distributed coordination system where an admin can dynamically add servers with IPs and ports to a servers.json file. Clients initially connect to a assistant server to know about exisiting servers and then can connect to any server later on


## Directory Structure

```python
project_root/
│── CMakeLists.txt          # CMake build file
│── data/
│   └── servers.json        # JSON storage
│── include/
│   └── assistantUtils.h    # Header files
|   └── Node.h
|   └── leaderElection.h
│── src/
│   ├── utils/
│   │   └── assistantUtils.cpp  # Utility functions
|   |   └── leaderElection.cpp
│   ├── server.cpp
│   ├── client.cpp
│   ├── admin.cpp
│── build/                  # (Generated build files)
```

## Features

Admin Control: Add servers dynamically to servers.json.

Client-Server Communication: Clients can request server information.

JSON Storage: Server details are saved in data/servers.json.

C++ with CMake: Modular structure with separate utilities and CMake build system.


## Dependencies
Ensure you have the following installed:

C++20 or later

CMake 3.10+

nlohmann-json library (Install with sudo apt install nlohmann-json3-dev on Ubuntu)

## Build Instructions

```python
# Create and navigate to the build directory
mkdir -p build && cd build

# Run CMake to generate build files
cmake .. && cmake --build .
```

## Running the Programs

```python
# Admin (Add servers)
./bin/admin

# Server (Start server)
./bin/server

# Client (Request server details)
./bin/client
```


## License

[MIT](https://choosealicense.com/licenses/mit/)
