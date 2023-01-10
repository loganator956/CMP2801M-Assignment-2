#include "Rectangle.h"

float Rectangle::calculateArea()
{
	return 0.0f;
}

float Rectangle::calculatePerimeter()
{
	return 0.0f;
}

std::vector<Point*> Rectangle::calculatePoints()
{
	return std::vector<Point*>();
}

void Rectangle::move()
{
}

void Rectangle::scale()
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
