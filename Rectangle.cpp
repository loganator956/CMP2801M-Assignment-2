#include "Rectangle.h"
#include <iostream>

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
	width *= x;
	height *= y;
	calculatePoints();
	calculateArea();
	calculatePerimeter();
}

std::string Rectangle::toString()
{
	std::string newString = "Rectangle[w=" + std::to_string(width) + ", h=" + std::to_string(height) + "]" +
		"\nPoints[";
	for (int i = 0; i < get_points().size(); i++)
	{
		std::cout << "(" << get_points()[i]->get_x() << ", " << get_points()[i]->get_y() << ")";
	}
	newString += "]\nArea=" + std::to_string(get_area()) + " Perimeter=" + std::to_string(get_perimeter());
	return newString;
}

Rectangle::Rectangle(int x, int y, int h, int w)
{
	leftTop = new Point(x, y);
	height = h;
	width = w;
}
