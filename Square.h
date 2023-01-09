#pragma once
#include "Shape.h"
#include "Movable.h"
class Square :
    public Shape, public Movable
{
private:
    int edge;
public:
    float calculateArea();
    float calculatePerimeter();
    std::vector<Point> calculatePoints();
    void move();
    void scale();
    std::string toString();
    Square(int x, int y, int e);
};

