cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "HelloWorldCipher")
set(PROJECT_VERSION 1.0.0)
set(EXE ${PROJECT_NAME})
set(LIB_USERACC LibraryUserAccount)
set(LIB_CRYPTO LibraryCrypto)
set(LIB_SEC_TALK LibrarySecureTalk)

project(
    ${PROJECT_NAME}
    VERSION ${PROJECT_VERSION}
    LANGUAGES CXX
)

set(CXX_STANDARD            17)
set(CXX_STANDARD_REQUIRED   ON)
set(CXX_EXTENSIONS          OFF)

add_subdirectory(src)