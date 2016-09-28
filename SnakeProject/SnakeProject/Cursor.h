#pragma once

#include <iostream>
#include <windows.h>

using namespace std;

class Cursor1
{
	private:
		int n;
		int m;
		char symbol;
	public:
		Cursor1();
		Cursor1(int a, int b, char c);
		~Cursor1();
		void draw();
};

