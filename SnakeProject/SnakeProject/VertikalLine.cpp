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

void VertikalLine::drawVLine() {
	list<Cursor1>::iterator iter;
	iter = myList.begin();
	for (; iter != myList.end(); iter++) {
		iter->draw();
	}
}
