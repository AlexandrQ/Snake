#pragma once

#include <list>   
#include <algorithm>
#include "Cursor.h"

class Figure
{
protected:
	list<Cursor1> myList;
public:
	Figure();
	~Figure();
	void drawLine();
};

