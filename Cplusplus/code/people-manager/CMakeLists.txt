cmake_minimum_required(VERSION 3.0)

project(PEOPLEMANAGER)
include_directories(include)
set(CMAKE_BUILD_TYPE Debug)
add_executable(main main.cpp  src/workerManager.cpp src/manager.cpp src/employee.cpp src/boss.cpp)