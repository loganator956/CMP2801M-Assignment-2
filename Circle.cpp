#include "Circle.h"
#include <iostream>

float Circle::calculateArea()
{
    set_area(pi * radius * radius);
    return get_area();
}

float Circle::calculatePerimeter()
{
    set_perimeter(pi * radius * 2);
    return get_perimeter();
}

std::vector<Point*> Circle::calculatePoints()
{
    std::vector<Point*> points = std::vector<Point*>();
    points.push_back(new Point(*leftTop));
    points.push_back(new Point(leftTop->get_x() + radius * 2, leftTop->get_y() + radius * 2));
    set_points(points);
    return get_points();
}

void Circle::move(int x, int y)
{
    leftTop->set_x(leftTop->get_x() + x);
    leftTop->set_y(leftTop->get_y() +y);
    calculatePoints();
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
    calculateArea();
    calculatePerimeter();
    calculatePoints();
}
