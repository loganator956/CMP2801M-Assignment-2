#include "Square.h"
#include <iostream>

float Square::calculateArea()
{
    set_area((float)(edge * edge));
    return get_area();
}

float Square::calculatePerimeter()
{
    set_perimeter((float)(edge * 4));
    return get_perimeter();
}

std::vector<Point*> Square::calculatePoints()
{
    std::vector<Point*> points = std::vector<Point*>();
    points.push_back(new Point(*leftTop));
    points.push_back(new Point(leftTop->get_x() + edge, leftTop->get_y()));
    points.push_back(new Point(leftTop->get_x() + edge, leftTop->get_y() + edge));
    points.push_back(new Point(leftTop->get_x(), leftTop->get_y() + edge));
    set_points(points);
    return get_points();
}

void Square::move(int x, int y)
{
    leftTop->set_x(leftTop->get_x() + x);
    leftTop->set_y(leftTop->get_y() + y);
    calculatePoints();
}

void Square::scale(int x, int y)
{
    // leftTOp stays the same
    edge *= x;
    calculatePoints();
    calculateArea();
    calculatePerimeter();
}

std::string Square::toString()
{
    std::string newString = "Square[e=" + std::to_string(edge) + "]" +
        "\nPoints[";
    for (int i = 0; i < get_points().size(); i++)
    {
        newString += "(" + std::to_string(get_points()[i]->get_x()) + ", " + std::to_string(get_points()[i]->get_y()) + ")";
    }
    newString += "]\nArea=" + std::to_string(get_area()) + " Perimeter=" + std::to_string(get_perimeter());
    return newString;
}

Square::Square(int x, int y, int e)
{
    leftTop = new Point(x, y);
    edge = e;
    calculatePoints();
    calculateArea();
    calculatePerimeter();
}
