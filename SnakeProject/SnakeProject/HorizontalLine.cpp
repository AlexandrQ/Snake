#include "HorizontalLine.h"



HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char symb)
{
	for (int x = xLeft; x <= xRight; x++) {
		Cursor1 p(x, y, symb);
		myList.push_back(p);
	}
}


HorizontalLine::~HorizontalLine()
{
}

