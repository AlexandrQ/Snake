#include "Figure.h"



Figure::Figure()
{
}


Figure::~Figure()
{
}

void Figure::drawLine() {
	list<Cursor1>::iterator iter;
	iter = myList.begin();
	for (; iter != myList.end(); iter++) {
		iter->draw();
	}
}