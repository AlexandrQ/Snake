
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"
#include "SnakeClass.h"
#include "FoodCreator.h"


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

	FoodCreator foodCteator(100, 40, '$');
	Cursor1 food = foodCteator.CreateFood();
	food.Draw();
	
	while (true) {		
		if (snake.Eat(food)) {
			food = foodCteator.CreateFood();
			food.Draw();
		}
		else {
			snake.Move();
		}

		Sleep(100);

		if (Console::KeyAvailable) {
			ConsoleKeyInfo key = Console::ReadKey();
			snake.HandleKey(key.Key);
		}
	}
	

	_getch();
	return 0;
}
