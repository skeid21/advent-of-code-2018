#include <gtest/gtest.h>
#include "../day1.hpp"

TEST(Day1Part1, SampleInput) {
    std::vector<int> input{1, -2, 3, 1};
    int res = Day1Part1(input);
    EXPECT_EQ(res, 3);
}

TEST(Day1Part2, SampleInput) {
    std::vector<int> input{1, -2, 3, 1};
    int res = Day1Part2(input);
    EXPECT_EQ(res, 2);
}