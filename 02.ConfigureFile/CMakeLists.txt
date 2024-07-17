cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "ConfigureFile")
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

add_subdirectory(src)

