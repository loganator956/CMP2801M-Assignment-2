#include "Shape.h"
#include <iostream>

Shape::Shape()
{
	std::cout << "Shape default constructor" << std::endl;
	area = 0.0f;
	perimeter = 0.0f;
	isCircular = false;
	leftTop = new Point(0, 0);
}

Shape::Shape(int x, int y)
{
	std::cout << "Shape constructor" << std::endl;
	area = 0.0f;
	perimeter = 0.0f;
	isCircular = false;
	leftTop = new Point(x, y);
}

Shape::~Shape()
{
	std::cout << "Shape deconstructor" << std::endl;
	delete leftTop;
}

std::vector<Point*> Shape::get_points()
{
	return points;
}

void Shape::set_points(std::vector<Point*> newPoints)
{
	for (int i = 0; i < points.size(); i++)
	{
		delete points[i];
	}
	points.clear();
	points = newPoints;
}

float Shape::get_area()
{
	return area;
}

void Shape::set_area( float newA)
{
	area = newA;
}

float Shape::get_perimeter()
{
	return perimeter;
}

void Shape::set_perimeter(float newP)
{
	perimeter = newP;
}