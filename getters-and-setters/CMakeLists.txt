cmake_minimum_required(VERSION 3.10)

project(getters-and-setters)

include_directories(include)

add_executable(getters-and-setters
  src/person.cpp
  src/getters-and-setters.cpp)
