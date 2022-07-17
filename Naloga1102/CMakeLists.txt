cmake_minimum_required(VERSION 3.20)
project(Naloga1102)

set(CMAKE_CXX_STANDARD 14)

add_executable(Naloga1102 naloga1102.cpp Address.cpp Address.h Date.cpp Date.h Student.cpp Student.h UnparseableDateException.cpp UnparseableDateException.h Log.cpp Log.h InvalidAddressException.cpp InvalidAddressException.h)
