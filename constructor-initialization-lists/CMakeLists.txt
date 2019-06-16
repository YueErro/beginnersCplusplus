cmake_minimum_required(VERSION 3.10)

project(constructor-initialization-lists)

include_directories(include)

add_executable(constructor-initialization-lists
  src/person.cpp
  src/constructor-initialization-lists.cpp)
