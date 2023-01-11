#pragma once
#include "Point.h"
#include <vector>
#include <string>
class Shape
{
private:
	float area;
	float perimeter;
	std::vector<Point> points;
public:
	std::vector<Point*> get_points();
	float get_area();
	float get_perimeter();
	bool isCircular;
	Point* leftTop;
	virtual float calculateArea() = 0;
	virtual float calculatePerimeter() = 0;
	virtual std::vector<Point*> calculatePoints() = 0;
	virtual std::string toString() = 0;
	Shape(); // do i  need this?
	Shape(int x, int y); // find out if this needs to be here or not?
	~Shape(); // does this need to be here?
};

