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
