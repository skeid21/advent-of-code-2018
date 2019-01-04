#pragma once
#include <vector>
using namespace std;
class BoundingBox {
public:
    BoundingBox(
        int minX, 
        int minY, 
        int maxX, 
        int maxY){
            MinX = minX;
            MinY = minY;
            MaxX = maxX;
            MaxY = maxY;
        }
    int MinX;
    int MinY;
    int MaxX;
    int MaxY;
};

int Day3Part1(const vector<BoundingBox>& inputs);