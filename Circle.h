#pragma once
#include "Shape.h"
#include "Movable.h"
/// <summary>
/// A circle shape. Cannot be scaled X and Y independently
/// </summary>
class Circle :
    public Shape, public Movable
{
private:
    int radius;
    const float pi = 3.141592;
public:
    float calculateArea();
    float calculatePerimeter();
    std::vector<Point*> calculatePoints();
    void move(int x, int y);
    void scale(int x, int y);
    std::string toString();
    Circle(int x, int y, int r);
};

