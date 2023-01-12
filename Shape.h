#pragma once
#include "Point.h"
#include <vector>
#include <string>
/// <summary>
/// Base class for all shapes.
/// Contains base transformation information and methods for all shapes.
/// </summary>
class Shape
{
private:
	float area;
	float perimeter;
	std::vector<Point*> points;
public:
	/// <summary>
	/// Default constructor. Defaults position to (0,0)
	/// </summary>
	Shape();
	/// <summary>
	/// Constructs new Shape object with position
	/// </summary>
	/// <param name="x">Position on X axis</param>
	/// <param name="y">Position on Y axis</param>
	Shape(int x, int y);
	/// <summary>
	/// Shape deconstructor
	/// </summary>
	~Shape();



	/// <summary>
	/// Retrieves the currently calculated points vector
	/// </summary>
	/// <returns>Vector containing points of the shape</returns>
	std::vector<Point*> get_points();
	/// <summary>
	/// Clears old points vector and sets the points vector
	/// </summary>
	/// <param name="newPoints">New, updated, vector to set</param>
	void set_points(std::vector<Point*> newPoints);

	/// <summary>
	/// Retrieves the currently calculated area
	/// </summary>
	/// <returns>Current area value</returns>
	float get_area();
	/// <summary>
	/// Sets the calculated area value
	/// </summary>
	/// <param name="newA">New area value to save</param>
	void set_area(float newA);

	/// <summary>
	/// Retrieves the currently calculated perimeter
	/// </summary>
	/// <returns>Current perimeter value</returns>
	float get_perimeter();
	/// <summary>
	/// Sets the calculated perimeter value
	/// </summary>
	/// <param name="newP">New perimeter of the shape</param>
	void set_perimeter(float newP);


	/// <summary>
	/// Calculates, and saves, the area of the shape
	/// </summary>
	/// <returns>Resulting area value</returns>
	virtual float calculateArea() = 0;
	/// <summary>
	/// Calculates, and saves, the perimeter of the shape
	/// </summary>
	/// <returns>Resulting perimeter value</returns>
	virtual float calculatePerimeter() = 0;
	/// <summary>
	/// Calculates, and saves, the points of the shape
	/// </summary>
	/// <returns>Resulting points of the shape</returns>
	virtual std::vector<Point*> calculatePoints() = 0;



	/// <summary>
	/// Is the shape circular?
	/// </summary>
	bool isCircular;
	/// <summary>
	/// Position of the top left (anchor point) of the shape.
	/// </summary>
	Point* leftTop;
	


	/// <summary>
	/// Returns a summary string of the shape information.
	/// </summary>
	/// <returns>String containing human-readable/friendly information about the shape.</returns>
	virtual std::string toString() = 0;
};

