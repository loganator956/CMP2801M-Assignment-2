#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y);
	int get_x();
	int get_y();
	void set_x(int newX);
	void set_y(int newY);
	inline Point operator +(Point const& other)
	{
		return Point(x + other.x, y + other.y);
	}
};

