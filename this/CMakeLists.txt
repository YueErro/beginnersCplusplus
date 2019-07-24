cmake_minimum_required(VERSION 3.10)

project(this)

include_directories(include)

add_executable(this
  src/person.cpp
  src/this.cpp)
