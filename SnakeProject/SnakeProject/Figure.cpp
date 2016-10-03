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
		iter->Draw();
	}
}

bool Figure::IsHit(Figure figure) {
	list<Cursor1>::iterator iter;
	iter = myList.begin();
	for (; iter != myList.end(); iter++) {
		if (figure.IsHit(*iter++)) {						//изменить p на элемент из списка myList ??????? UPD заменил p на указатель *iter 
			return true;
		}
	}
	return false;
}

bool Figure::IsHit(Cursor1 point) {
	list<Cursor1>::iterator iter;
	iter = myList.begin();
	for (; iter != myList.end(); iter++) {
		if (iter -> IsHit( point ) ) {					
			return true;
		}
	}
	return false;
}
