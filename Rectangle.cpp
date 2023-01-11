#include "Rectangle.h"

float Rectangle::calculateArea()
{
	return (float)(width * height);
}

float Rectangle::calculatePerimeter()
{
	return (float)(width * 2 + height * 2);
}

std::vector<Point*> Rectangle::calculatePoints()
{
	std::vector<Point*> points = std::vector<Point*>();
	points.push_back(leftTop);
	points.push_back(new Point(leftTop->get_x() + width, leftTop->get_y()));
	points.push_back(new Point(leftTop->get_x() + width, leftTop->get_y() - height));
	points.push_back(new Point(leftTop->get_x(), leftTop->get_y() - height));
	return points;
}

void Rectangle::move(int x, int y)
{
	leftTop->set_x(leftTop->get_x() + x);
	leftTop->set_y(leftTop->get_y() + y);
}

void Rectangle::scale(int x, int y)
{
}

std::string Rectangle::toString()
{
	return "Rectangle[h=" + std::to_string(height) + ",w=" + std::to_string(width) + "]";
}

Rectangle::Rectangle(int x, int y, int h, int w)
{
	leftTop = new Point(x, y);
	height = h;
	width = w;
}
