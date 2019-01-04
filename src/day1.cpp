#include "day1.hpp"
#include "day1.input.hpp"
#include <algorithm>
#include <unordered_set>
#include "absl/strings/str_split.h"

using namespace std;
static vector<int> ReadInput(const std::string &inputString)
{
    vector<string> splitInputs = absl::StrSplit(inputString, '\n');
    vector<int> intInputs;
    for (auto input : splitInputs)
    {
        intInputs.push_back(atoi(input.c_str()));
    }

    return intInputs;
}

int Day1Part1(const vector<int> &input)
{
    int sum = 0;
    std::for_each(input.begin(), input.end(), [&](const int value) {
        sum += value;
    });

    return sum;
}

int Day1Part2(const vector<int> &input)
{
    int sum = 0;
    unordered_set<int> foundSums;
    auto itr = input.begin();
    while (true)
    {
        sum += *itr;
        if (foundSums.end()!= foundSums.find(sum)){
            return sum;
        }
        foundSums.insert(sum);
        
        itr++; 
        if (itr == input.end()){
            itr = input.begin();
        }
    }
}
void SolveDay1Part1()
{
    auto inputs = ReadInput(Day1Input);
    auto solution = Day1Part1(inputs);
    cout << "Day1 Part1 Solution: " << solution << endl;
}

void SolveDay1Part2()
{
    auto inputs = ReadInput(Day1Input);
    auto solution = Day1Part2(inputs);
    cout << "Day1 Part2 Solution: " << solution << endl;
}