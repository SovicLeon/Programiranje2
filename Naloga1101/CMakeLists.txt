cmake_minimum_required(VERSION 3.20)
project(Naloga1101)

set(CMAKE_CXX_STANDARD 14)

add_executable(Naloga1101 naloga1101.cpp Address.cpp Address.h Date.cpp Date.h Student.cpp Student.h UnparseableDateException.cpp UnparseableDateException.h InvalidAddressException.cpp InvalidAddressException.h)
