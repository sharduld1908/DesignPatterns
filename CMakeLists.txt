cmake_minimum_required(VERSION 3.0)

project(DesignPatterns)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory("${PROJECT_SOURCE_DIR}/Creational/Factory")
add_subdirectory("${PROJECT_SOURCE_DIR}/Creational/Abstract Factory")