cmake_minimum_required(VERSION 3.15)
project(YanACM)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
AUX_SOURCE_DIRECTORY(src SRC_LIST)

add_executable(YanACM ${SRC_LIST})