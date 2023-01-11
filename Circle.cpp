#include "Circle.h"
#include <iostream>

float Circle::calculateArea()
{
    return pi * radius * radius;
}

float Circle::calculatePerimeter()
{
    return pi * radius * 2;
}

std::vector<Point*> Circle::calculatePoints()
{
    return std::vector<Point*>();
}

void Circle::move(int x, int y)
{
    std::cout << "Move circle" << std::endl;
}

void Circle::scale(int x, int y)
{
}

std::string Circle::toString()
{
    return std::string();
}

Circle::Circle(int x, int y, int r)
{
    leftTop = new Point(x, y);
    radius = r;
    isCircular = true;
}
