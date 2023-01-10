#include "Square.h"

float Square::calculateArea()
{
    return 0.0f;
}

float Square::calculatePerimeter()
{
    return 0.0f;
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

void Square::move()
{
}

void Square::scale()
{
}

std::string Square::toString()
{
    return std::string();
}

Square::Square(int x, int y, int e)
{
    leftTop = new Point(x, y);
    edge = e;
}
