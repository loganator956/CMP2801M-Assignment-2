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
    leftTop->set_x(leftTop->get_x() + x);
    leftTop->set_y(leftTop->get_y() +y);
}

void Circle::scale(int x, int y)
{
    // use the x value
    radius *= x;
    calculatePoints();
    calculateArea();
    calculatePerimeter();
}

std::string Circle::toString()
{
    std::string newString = "Circle[r=" + std::to_string(radius) + "]" +
        "\nPoints[";
    for (int i = 0; i < get_points().size(); i++)
    {
        newString += "(" + std::to_string(get_points()[i]->get_x()) + ", " + std::to_string(get_points()[i]->get_y()) + ")";
    }
    newString += "]\nArea=" + std::to_string(get_area()) + " Perimeter=" + std::to_string(get_perimeter());
    return newString;
}

Circle::Circle(int x, int y, int r)
{
    leftTop = new Point(x, y);
    radius = r;
    isCircular = true;
}
