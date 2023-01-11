#pragma once
class Movable
{
private:

public:
	virtual void move(int x, int y) = 0;
	virtual void scale(int x, int y) = 0;
};

