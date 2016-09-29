#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"
#include "Figure.h" 

class VertikalLine : public Figure
{
public:
	VertikalLine(int yUp, int yDown, int x, char symb);
	~VertikalLine();
};

