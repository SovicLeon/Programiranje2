cmake_minimum_required(VERSION 3.20)
project(Naloga0502)

set(CMAKE_CXX_STANDARD 14)

add_executable(Naloga0502 naloga0502.cpp Device.cpp Device.h Light.cpp Light.h SmartHome.cpp SmartHome.h Lock.cpp Lock.h AirConditioner.cpp AirConditioner.h)
