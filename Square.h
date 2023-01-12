#pragma once
#include "Shape.h"
#include "Movable.h"
/// <summary>
/// A square shape. Cannot be scaled on X and Y independently
/// </summary>
class Square :
    public Shape, public Movable
{
private:
    int edge;
public:
    float calculateArea();
    float calculatePerimeter();
    std::vector<Point*> calculatePoints();
    void move(int x, int y);
    void scale(int x, int y);
    std::string toString();
    Square(int x, int y, int e);
};

