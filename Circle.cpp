#include "Circle.h"

float Circle::calculateArea()
{
    return 0.0f;
}

float Circle::calculatePerimeter()
{
    return 0.0f;
}

std::vector<Point*> Circle::calculatePoints()
{
    return std::vector<Point*>();
}

void Circle::move()
{
}

void Circle::scale()
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
