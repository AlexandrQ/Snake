#pragma once

#include <iostream>
#include <windows.h>
#include "Direction.h"

using namespace std;

class Cursor1
{
	private:
		int x;
		int y;
		char symbol;
	public:
		Cursor1();
		Cursor1(int a, int b, char c);
		~Cursor1();
		void Draw();
		void Move(int offset, Direction direction);
};

