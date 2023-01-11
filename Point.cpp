#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::get_x()
{
	return x;
}

int Point::get_y()
{
	return y;
}

void Point::set_x(int newX)
{
	x = newX;
}

void Point::set_y(int newY)
{
	y = newY;
}
