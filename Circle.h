#pragma once
#include "Shape.h"
#include "Movable.h"
class Circle :
    public Shape, public Movable
{
private:
    int radius;
public:
    float calculateArea();
    float calculatePerimeter();
    std::vector<Point> calculatePoints();
    void move();
    void scale();
    std::string toString();
    Circle(int x, int y, int r);
};
