#include "FoodCreator.h"



FoodCreator::FoodCreator(int _mapWidth, int _mapHeigth, char _sym)
{
	mapWidth = _mapWidth;
	mapHeigth = _mapHeigth;
	sym = _sym;
}


FoodCreator::~FoodCreator()
{
}

Cursor1 FoodCreator::CreateFood() {
	srand(time(0));
	int x = rand() % (mapWidth - 2) + 2;
	int y = rand() % (mapHeigth - 2) + 2;
	return Cursor1(x, y, sym);
}
