cmake_minimum_required(VERSION 3.0)

project(Factory)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(SOURCE_FILES main.cpp Coffee.cpp CoffeeMachine.cpp)

add_executable(make_coffee ${SOURCE_FILES})