#pragma once

#include "Figure.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"

class Walls
{
protected:
	list<Figure> wallList;
public:

	Walls(int mapWidth, int mapHeigth);
	~Walls();
	void Draw();
	bool IsHit(Figure figure);
};

