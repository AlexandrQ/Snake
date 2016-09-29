#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"


class HorizontalLine
{
	list<Cursor1> myList;

public:
	HorizontalLine(int xLeft, int xRight, int y, char symb);
	~HorizontalLine();
	void drawHLine();
};

