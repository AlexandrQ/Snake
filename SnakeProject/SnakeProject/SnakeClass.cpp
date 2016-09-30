#include "SnakeClass.h"



SnakeClass::SnakeClass(Cursor1 tail, int length, Direction direction)
{
	for (int i = 0; i <= length; i++) {

		Cursor1 p = tail;
		p.Move(i, direction);
		myList.push_back(p);

	}
}


SnakeClass::~SnakeClass()
{
}
