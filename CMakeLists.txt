cmake_minimum_required(VERSION 3.23)

project(c_vector LANGUAGES C)

set(C_STANDARD 11)
set(C_STANDARD_REQUIRED TRUE)

set(PROJECT_SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(SOURCEFILES
    ${PROJECT_INCLUDE_DIR}/c_vector.h ${PROJECT_SRC_DIR}/c_vector_int.c
    ${PROJECT_SRC_DIR}/c_vector_float.c ${PROJECT_SRC_DIR}/c_vector_double.c
    ${PROJECT_SRC_DIR}/c_vector_char.c)

add_library(${PROJECT_NAME} STATIC ${SOURCEFILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})

add_subdirectory(examples)
