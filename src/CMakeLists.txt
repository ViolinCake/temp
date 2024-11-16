cmake_minimum_required(VERSION 3.22)
project(vehicle)

file(GLOB SOURCES "*.cpp")

# add_executable(${PROJECT_NAME} main.cpp
#                                 SpeedSensorDiagStrategy.cpp
#                                 SpeedSensorReading.cpp
#                                 )

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/headers)