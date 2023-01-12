#pragma once
/// <summary>
/// Provides an interface to move Shape objects
/// </summary>
class Movable
{
public:
	/// <summary>
	/// Move (Translate) a shape position
	/// </summary>
	/// <param name="x">Amount to move shape on x axis</param>
	/// <param name="y">Amount to move shape on y axis</param>
	virtual void move(int x, int y) = 0;
	/// <summary>
	/// Scale a shape, anchored to leftTop
	/// </summary>
	/// <param name="x">Amount to scale shape on X axis (Or both if square or circle)</param>
	/// <param name="y">Amount to scale shape on Y axis (ignored if square or circle)</param>
	virtual void scale(int x, int y) = 0;
};

