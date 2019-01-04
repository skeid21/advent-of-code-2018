#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "../day2.hpp"
using namespace std;
TEST(Day2, Part1)
{
    std::vector<string> inputs {
        "abcdef",
        "bababc",
        "abbcde",
        "abcccd",
        "aabcdd",
        "abcdee",
        "ababab"};

    auto res = Day2Part1(inputs);
    EXPECT_EQ(res, 12);
}

TEST(Day2, Part2)
{
    std::vector<string> inputs {
        "abcde",
        "fghij",
        "klmno",
        "pqrst",
        "fguij",
        "axcye",
        "wvxyz"};

    auto res = Day2Part2(inputs);
    EXPECT_EQ(res, "fgij");
}