#pragma once
#include "Point.h"
#include <vector>
#include <string>
class Shape
{
private:
	float area;
	float perimeter;
	std::vector<Point*> points;
public:
	std::vector<Point*> get_points();
	void set_points(std::vector<Point*>);
	float get_area();
	void set_area(float newA);
	float get_perimeter();
	void set_perimeter(float newP);
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

