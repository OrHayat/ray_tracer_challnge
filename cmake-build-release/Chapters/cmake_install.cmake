# Install script for directory: D:/Program Files/ray_tracer_cpp/Chapters

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ray_tracer")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter1/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter2/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter4/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter5/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter6/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter7/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter8/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter9/cmake_install.cmake")
  include("D:/Program Files/ray_tracer_cpp/cmake-build-release/Chapters/Chapter10/cmake_install.cmake")

endif()

