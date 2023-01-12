#pragma once
/// <summary>
/// Stores information about locations of objects and their vertices
/// </summary>
class Point
{
private:
	int x;
	int y;
public:
	/// <summary>
	/// Constructs a new Point object
	/// </summary>
	/// <param name="x">Position on X axis</param>
	/// <param name="y">Position on Y axis</param>
	Point(int x, int y);
	/// <summary>
	/// Retrieves the current position on the X axis
	/// </summary>
	/// <returns>Current X value</returns>
	int get_x();
	/// <summary>
	/// Retrieves the current position on the Y axis
	/// </summary>
	/// <returns>Current Y value</returns>
	int get_y();
	/// <summary>
	/// Sets X value of the point
	/// </summary>
	/// <param name="newX">New value of X co-ordinate</param>
	void set_x(int newX);
	/// <summary>
	/// Sets Y value of the point
	/// </summary>
	/// <param name="newY">New value of Y co-ordinate</param>
	void set_y(int newY);
	// Adds multiple point objects together
	inline Point operator +(Point const& other)
	{
		return Point(x + other.x, y + other.y);
	}
};

