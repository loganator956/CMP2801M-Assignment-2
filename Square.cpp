#include "Square.h"
#include <iostream>

float Square::calculateArea()
{
    return (float)(edge * edge);
}

float Square::calculatePerimeter()
{
    return (float)(edge * 4);
}

std::vector<Point*> Square::calculatePoints()
{
    std::vector<Point*> points = std::vector<Point*>();
    points.push_back(leftTop);
    points.push_back(new Point(leftTop->get_x() + edge, leftTop->get_y()));
    points.push_back(new Point(leftTop->get_x() + edge, leftTop->get_y() - edge));
    points.push_back(new Point(leftTop->get_x(), leftTop->get_y() - edge));
    return points;
}

void Square::move(int x, int y)
{
    leftTop->set_x(leftTop->get_x() + x);
    leftTop->set_y(leftTop->get_y() + y);
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
}
