cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "UnitTestCatch2")
set(PROJECT_VERSION 1.0.0)
set(EXE ${PROJECT_NAME})
set(LIBA LibraryA)
set(LIBB LibraryB)

project(
    ${PROJECT_NAME}
    VERSION ${PROJECT_VERSION}
    LANGUAGES CXX
)

set(CXX_STANDARD            17)
set(CXX_STANDARD_REQUIRED   ON)
set(CMAKE_CXX_EXTENSIONS    OFF)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(Docs)
include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(Catch2)

add_subdirectory(src)
add_subdirectory(tests)

