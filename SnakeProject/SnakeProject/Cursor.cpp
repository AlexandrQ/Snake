
#include "Cursor.h"

 Cursor1::Cursor1() {
	 n = 0;
	 m = 0;
	 symbol = '#';
}

Cursor1::Cursor1(int a, int b, char c)
{
	n = a;
	m = b;
	symbol = c;
}


Cursor1::~Cursor1()
{
}

void Cursor1::draw() {
	COORD coord;
	coord.X = n;
	coord.Y = m;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
	cout << symbol << endl;
} 