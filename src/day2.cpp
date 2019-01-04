#include "day2.hpp"
#include "day2.input.hpp"
#include <map>
#include <algorithm>
#include <iostream>
#include <iterator>
#include "absl/strings/str_split.h"

using namespace std;
static vector<string> ReadInput(const string &input)
{
    return absl::StrSplit(input, '\n');
}

int Day2Part1(const vector<string> &inputs)
{
    auto repeatTwoCount = 0;
    auto repeatThreeCount = 0;
    for (auto input : inputs)
    {
        map<char, int> count;
        for (auto ch : input)
        {
            count[ch]++;
        }

        auto findItr = find_if(count.begin(), count.end(), [&](auto &mapPair) {
            return (mapPair.second == 2);
        });
        if (findItr != count.end())
        {
            repeatTwoCount++;
        }

        findItr = find_if(count.begin(), count.end(), [&](auto &mapPair) {
            return (mapPair.second == 3);
        });
        if (findItr != count.end())
        {
            repeatThreeCount++;
        }
    }

    return repeatTwoCount * repeatThreeCount;
}

string Day2Part2(const vector<string> &inputs)
{
    for (int scan1 = 0; scan1 < inputs.size(); ++scan1)
    {
        auto focusInput1 = inputs[scan1];
        for (int scan2 = scan1 + 1; scan2 < inputs.size(); ++scan2)
        {
            auto focusInput2 = inputs[scan2];

            auto diffCount = 0;
            auto begin1 = focusInput1.begin();
            auto end1 = focusInput1.end();
            auto begin2 = focusInput2.begin();
            auto end2 = focusInput2.end();

            while (diffCount < 2)
            {
                auto findIters = mismatch(begin1, end1, begin2, end2);
                if (findIters.first == end1)
                {
                    break;
                }
                begin1 = findIters.first + 1;
                begin2 = findIters.second + 1;
                diffCount++;
            }

            if (diffCount == 1)
            {
                focusInput1.erase(begin1-1);
                return focusInput1;
            }
        }
    }

    return "";
}

void SolveDay2Part1()
{
    auto solution = Day2Part1(ReadInput(Day2Input));
    cout << "Day2 Part1 Solution: " << solution << endl;
}

void SolveDay2Part2()
{
    auto solution = Day2Part2(ReadInput(Day2Input));
    cout << "Day2 Part2 Solution: " << solution << endl;
}