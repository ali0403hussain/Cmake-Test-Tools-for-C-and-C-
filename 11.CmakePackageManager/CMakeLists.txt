cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "CPM")
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

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(CPM)
set(CPM_SOURCE_CACHE ${CMAKE_SOURCE_DIR}/external)
# gh stand for git hub : name of the user / repo name # version
cpmaddpackage("gh:nlohmann/json#v3.11.3")
add_subdirectory(src)

