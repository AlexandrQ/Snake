
#include "Cursor.h"

 Cursor1::Cursor1() {
	 x = 0;
	 y = 0;
	 symbol = '#';
}

Cursor1::Cursor1(int a, int b, char c)
{
	x = a;
	y = b;
	symbol = c;
}


Cursor1::~Cursor1()
{
}

void Cursor1::Draw() {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
	cout << symbol << endl;
} 

void Cursor1::Move(int offset, Direction direction) {
	if (direction == RIGHT) {
		x = x + offset;
	}
	else if (direction == LEFT) {
		x = x - offset;
	}
	else if (direction == UP) {
		y = y - offset;
	}
	else if (direction == DOWN) {
		y = y + offset;
	}
}

void Cursor1::Clear() {
	symbol = ' ';
	Draw();
}

bool Cursor1::IsHit(Cursor1 p) {
	return p.x == this->x && p.y == this->y;
}