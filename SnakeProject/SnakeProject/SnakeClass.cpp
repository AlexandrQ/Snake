#include "SnakeClass.h"



SnakeClass::SnakeClass(Cursor1 tail, int length, Direction _direction)
{
	direction = _direction;
								//тут возможно потребуется создавать список
	for (int i = 0; i <= length; i++) {									
		Cursor1 p = tail;
		p.Move(i, _direction);
		myList.push_back(p);

	}
}


SnakeClass::~SnakeClass()
{
}

void SnakeClass::Move() {
 Cursor1 tail = myList.front();

	list<Cursor1>::iterator iter1;
	iter1 = myList.begin();
	myList.erase(iter1);
	Cursor1 head = GetNextPoint();
	myList.push_back(head);

	tail.Clear();
	head.Draw();  
}

Cursor1 SnakeClass::GetNextPoint() {
	Cursor1 head = myList.back();
	Cursor1 nextPoint = head;
	nextPoint.Move(1, direction);
	return nextPoint;
}

void SnakeClass::HandleKey(ConsoleKey Key) {
	if (Key == ConsoleKey::LeftArrow) {
		direction = LEFT;
	}
	if (Key == ConsoleKey::RightArrow) {
		direction = RIGHT;
	}
	if (Key == ConsoleKey::DownArrow) {
		direction = DOWN;
	}
	if (Key == ConsoleKey::UpArrow) {
		direction = UP;
	}
}
