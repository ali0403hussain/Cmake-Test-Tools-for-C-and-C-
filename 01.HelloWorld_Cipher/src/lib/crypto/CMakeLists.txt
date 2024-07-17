set(LIB_CRYPTO_SRC Crypto.cpp)
set(LIB_CRYPTO_INC "../inc")
add_library(${LIB_CRYPTO} STATIC ${LIB_CRYPTO_SRC})
target_include_directories(${LIB_CRYPTO} PUBLIC ${LIB_CRYPTO_INC})