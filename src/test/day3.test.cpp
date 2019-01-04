#include <gtest/gtest.h>
#include <vector>
#include "../day3.hpp"
using namespace std;
TEST(Day3, Part1) {
   vector<BoundingBox> inputs; 
   inputs.push_back(BoundingBox(1,2,5,6));
   inputs.push_back(BoundingBox(3,1,7,5));
   inputs.push_back(BoundingBox(5,5,7,7));

   int res = Day3Part1(inputs);
}