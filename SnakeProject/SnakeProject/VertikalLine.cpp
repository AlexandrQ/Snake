#include "VertikalLine.h"



VertikalLine::VertikalLine(int yUp, int yDown, int x, char symb)
{
	for (int s = yUp; s <= yDown; s++) {
		Cursor1 p(x, s, symb);
		myList.push_back(p);
	}
}


VertikalLine::~VertikalLine()
{
}
