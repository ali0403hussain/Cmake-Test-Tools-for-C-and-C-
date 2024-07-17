cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "AddWarnings")
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

option(ENABLE_WARNINGS "Enable Warnings" ON)
option(ENABLE_WARNINGS_AS_ERRORS "Enable Warnings as Errors" OFF)

#We can only use FetchContent if the Repo is CMake Project.
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

if(${ENABLE_WARNINGS})
    include(Warnings)
    message(STATUS "Warnings Enabled for:${CMAKE_CXX_COMPILER_ID}")
endif()

add_subdirectory(src)

