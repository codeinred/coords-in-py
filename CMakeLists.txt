
cmake_minimum_required(VERSION 3.21)

project(
  coords-in-py
  LANGUAGES CXX C
  VERSION 0.1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(pybind11 CONFIG)

pybind11_add_module(coords src/main.cpp)
