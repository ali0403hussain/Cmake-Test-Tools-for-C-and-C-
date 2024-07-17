cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "IPOandLTO")
set(PROJECT_VERSION 1.0.0)
set(EXE ${PROJECT_NAME})
set(LIBA LibraryA)
set(LIBB LibraryB)

project(
    ${PROJECT_NAME}
    VERSION ${PROJECT_VERSION}
    LANGUAGES CXX
)

set(CMAKE_CXX_COMPILER     "g++")
set(CXX_STANDARD            17)
set(CXX_STANDARD_REQUIRED   ON)
set(CMAKE_CXX_EXTENSIONS    OFF)

#for Warnings
option(ENABLE_WARNINGS "Enable Warnings" OFF)
option(ENABLE_WARNINGS_AS_ERRORS "Enable Warnings as Errors" OFF)

#for Sanitizers
option(ENABLE_SANITIZE_ADDR "Enable Sanitizer address" OFF)
option(ENABLE_SANITIZE_UNDEF "Enable Sanitizer Undefined" OFF)

#for IPO/LTO
option(ENABLE_LTO "Enable Link Time Optimization" OFF)

#We can only use FetchContent if the Repo is CMake Project.
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

if(${ENABLE_WARNINGS})
    include(Warnings)
    message(STATUS "Warnings Enabled for:${CMAKE_CXX_COMPILER_ID}")
endif()

if((${NABLE_SANITIZE_ADDR}) OR (${ENABLE_SANITIZE_UNDEF}))
    include(Sanitizers)
    add_sanitizers_flags()
endif()

if(${ENABLE_LTO})
    include(LTO)
endif()

add_subdirectory(src)

