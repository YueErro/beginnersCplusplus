cmake_minimum_required(VERSION 3.10)

project(practice_explosion)

find_package(SDL2 REQUIRED)

include_directories(
  include
  ${SDL2_INCLUDE_DIRS})

add_executable(practice_explosion
  src/particle.cpp
  src/screen.cpp
  src/swarm.cpp
  src/main.cpp)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
