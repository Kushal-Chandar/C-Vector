cmake_minimum_required(VERSION 3.23)

project(
  c_vector
  VERSION "1.1.1.0" # major.minior.patch.tweak
  HOMEPAGE_URL "https://github.com/Kushal-Chandar/C-Vector"
  DESCRIPTION
    "This is a C implementation (a bit hacky) that provides an useful interface to create, delete and modify the internal dynamically allocated c array to use it like a C++ Vector."
  LANGUAGES C)

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
