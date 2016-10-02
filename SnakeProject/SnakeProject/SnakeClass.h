#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"
#include "Direction.h"
#include "Figure.h"


using namespace System;



class SnakeClass : public Figure
{	
private:
	Direction direction;
public:	
	SnakeClass(Cursor1 tail, int length, Direction _direction);
	~SnakeClass();
	void Move();
	Cursor1 GetNextPoint();
	void HandleKey(ConsoleKey);
	bool Eat(Cursor1 food);
};

