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
	bool isCircular;
	Point* leftTop;
	virtual float calculateArea() = 0;
	virtual float calculatePerimeter() = 0;
	virtual std::vector<Point*> calculatePoints() = 0;
	virtual std::string toString() = 0;
};

