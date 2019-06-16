cmake_minimum_required(VERSION 3.10)

project(constructors-and-destructors)

include_directories(include)

add_executable(constructors-and-destructors
  src/cat.cpp
  src/constructors-and-destructors.cpp)
