#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"
#include "Direction.h"
#include "Figure.h"

class SnakeClass : public Figure
{	
public:
	SnakeClass(Cursor1 tail, int length, Direction direction);
	~SnakeClass();
};

