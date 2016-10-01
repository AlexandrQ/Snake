
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"
#include "SnakeClass.h"


using namespace std;
using namespace System;


int main() {
	
	system("mode con cols=100 lines=40");

	//Рисуем рамку
	HorizontalLine Hline1(1, 98, 1, '*');
	HorizontalLine Hline2(1, 98, 38, '*');
	VertikalLine VLine1(1, 38, 1, '*');
	VertikalLine VLine2(1, 38, 98, '*');
	
	Hline1.drawLine();
	Hline2.drawLine();
	VLine1.drawLine();	
	VLine2.drawLine();





	//Рисуем змейку
	Cursor1 p(10, 10, '#');
	SnakeClass snake(p, 6, RIGHT);
	snake.drawLine();

	//Двигаем змейку
	snake.Move();
	Sleep(300);
	
	while (true) {		
		if (Console::KeyAvailable) {
			ConsoleKeyInfo key = Console::ReadKey();
			snake.HandleKey(key.Key);
		}
		Sleep(100);
		snake.Move();
	}
	

	_getch();
	return 0;
}
