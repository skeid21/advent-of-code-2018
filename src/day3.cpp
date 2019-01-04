#include "day3.hpp"
using namespace std;

int Day3Part1(const vector<BoundingBox>& inputs){
    for(auto focusItr = inputs.begin(); focusItr != inputs.end(); focusItr++) {
        auto& focusBB = *focusItr;
        for (auto nextItr = focusItr + 1; nextItr != inputs.end(); nextItr++) {
            auto& nextBB = *nextItr;
            int xOrigin = 0;
            int yOrigin = 0;

             
            if (focusBB.max < nextBB.MinX) {

            }
            
        }
    }
}