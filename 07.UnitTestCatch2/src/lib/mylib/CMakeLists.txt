set(LIBA_SRC myLib.cpp)
set(LIBA_INC "../inc")
add_library(${LIBA} STATIC ${LIBA_SRC})
target_include_directories(${LIBA} PUBLIC ${LIBA_INC})