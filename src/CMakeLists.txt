
set(CMAKE_CXX_FLAGS "-fstandalone-debug")

add_executable(${PROJECT_NAME} 
    day1.cpp
    day2.cpp 
    day3.cpp
    main.cpp)

target_link_libraries(
    ${PROJECT_NAME}
    absl::base 
    absl::synchronization 
    absl::strings)

SET(CTEST_OUTPUT_ON_FAILURE TRUE)

add_executable(unit_tests 
    day1.cpp
    test/day1.test.cpp
    day2.cpp
    test/day2.test.cpp
    day3.cpp
    test/day3.test.cpp)
target_link_libraries(
    unit_tests 
    gtest_main
    absl::base 
    absl::synchronization 
    absl::strings )
gtest_discover_tests(unit_tests)