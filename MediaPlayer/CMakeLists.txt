# CMakeList.txt : CMake project for MediaPlayer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (MediaPlayer "MediaPlayer.cpp" "MediaPlayer.h"  "Song.h" "Song.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MediaPlayer PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
