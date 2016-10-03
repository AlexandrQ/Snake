#pragma once

#include <iostream>
#include <windows.h>
#include "Direction.h"

using namespace std;

class Cursor1
{
	protected:
		int x;
		int y;
		
	public:		
		char symbol;			

		Cursor1();
		Cursor1(int a, int b, char c);
		~Cursor1();
		void Draw();
		void Move(int offset, Direction direction);
		void Clear();
		bool IsHit(Cursor1 p);
};

