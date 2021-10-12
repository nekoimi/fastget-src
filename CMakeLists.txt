project(fastget C)
cmake_minimum_required(VERSION 3.19)

set(CMAKE_C_STANDARD 99)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(./src)

aux_source_directory(./src SOURCE)

add_executable(fastget main.c ${SOURCE})