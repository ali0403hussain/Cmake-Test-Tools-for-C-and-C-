set(LIBB_SRC LibB.cpp)
set(LIBB_INC "../inc")
add_library(${LIBB} STATIC ${LIBB_SRC})
target_include_directories(${LIBB} PUBLIC ${LIBB_INC})