#include "Square.h"

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
