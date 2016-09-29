#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"
#include "Figure.h" 


class HorizontalLine : public Figure
{
public:
	HorizontalLine(int xLeft, int xRight, int y, char symb);
	~HorizontalLine();	
};

