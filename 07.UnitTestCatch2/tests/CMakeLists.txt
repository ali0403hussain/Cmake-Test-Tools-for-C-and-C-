set(TEST_MAIN "unit_tests")
set(TEST_SRC main.cc)
set(TEST_INC "./")

add_executable(${TEST_MAIN} ${TEST_SRC})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INC})
target_link_libraries(${TEST_MAIN} PUBLIC ${LIBA} Catch2::Catch2)