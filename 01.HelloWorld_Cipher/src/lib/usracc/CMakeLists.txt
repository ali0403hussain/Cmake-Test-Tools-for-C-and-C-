set(LIB_USRACC_SRC UserAccount.cpp)
set(LIB_USRACC_INC "../inc")
add_library(${LIB_USERACC} STATIC ${LIB_USRACC_SRC})
target_include_directories(${LIB_USERACC} PUBLIC ${LIB_USRACC_INC})