set(EXE_SRC main.cpp)
set(EXE_INC "../lib/inc" "${CMAKE_BINARY_DIR}/src/lib/inc")
set(EXE_WARN -Werror -Wall -Wextra)

add_executable(${EXE} ${EXE_SRC})

target_link_libraries(${EXE} PUBLIC ${LIBA} 
                                    ${LIBB} 
                                    nlohmann_json
                                    fmt
                                    spdlog
                                    cxxopts)

target_include_directories(${EXE} PUBLIC ${EXE_INC})

target_compile_options(${EXE} PRIVATE ${EXE_WARN})