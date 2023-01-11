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
