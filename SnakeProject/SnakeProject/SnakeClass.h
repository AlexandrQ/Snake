#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"
#include "Direction.h"
#include "Figure.h"

class SnakeClass : public Figure
{	
	Direction direction;
public:
	SnakeClass(Cursor1 tail, int length, Direction _direction);
	~SnakeClass();
	void Move();
	Cursor1 GetNextPoint();
};

