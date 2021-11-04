cmake_minimum_required(VERSION 3.20)
project(Blockchain)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blockchain main.cpp Block.cpp Block.h Blockchain.cpp Blockchain.h Struct.cpp Structt.cpp Structt.h)
