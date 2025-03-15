cmake_minimum_required( VERSION 3.28.3)
project(ap)
add_executable(app src/patient.cpp src/hospital.cpp src/main.cpp)
include_directories(include)