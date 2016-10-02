#pragma once

#include <ctime>
#include "Cursor.h"

class FoodCreator
{
protected:
	int mapWidth;
	int mapHeigth;
	char sym;
public:	
	FoodCreator(int _mapWidth, int _mapHeigth, char _sym);
	~FoodCreator();
	Cursor1 CreateFood();


};

