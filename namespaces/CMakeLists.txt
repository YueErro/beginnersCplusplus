cmake_minimum_required(VERSION 3.10)

project(namespaces)

include_directories(include)

add_executable(namespaces
  src/animals.cpp
  src/cat.cpp
  src/namespaces.cpp)
