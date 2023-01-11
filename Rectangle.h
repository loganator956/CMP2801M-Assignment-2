#pragma once
#include "Shape.h"
#include "Movable.h"
class Rectangle :
    public Shape, public Movable
{
private:
    int height;
    int width;
public:
    float calculateArea();
    float calculatePerimeter();
    std::vector<Point*> calculatePoints();
    void move(int x, int y);
    void scale(int x, int y);
    std::string toString();
    Rectangle(int x, int y, int h, int w);
};

