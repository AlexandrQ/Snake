#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"

class VertikalLine
{
	list<Cursor1> myList;
public:
	VertikalLine(int yUp, int yDown, int x, char symb);
	~VertikalLine();
	void drawVLine();
};

