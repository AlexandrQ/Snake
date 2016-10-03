
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"
#include "SnakeClass.h"
#include "FoodCreator.h"
#include "Walls.h"


using namespace std;
using namespace System;


int main() {
	
	const int _mapWidth = 60; 
	const int _mapHeigth = 30;

	system("mode con cols=60 lines=30");

	//Рисуем рамку
	Walls walls(_mapWidth, _mapHeigth);
	walls.Draw();

	//Рисуем змейку
	Cursor1 p(10, 10, '#');
	SnakeClass snake(p, 6, RIGHT);
	snake.drawLine();

	//Рисуем еду
	FoodCreator foodCteator(_mapWidth, _mapHeigth, '$');
	Cursor1 food = foodCteator.CreateFood();
	food.Draw();
	

	while (true) {		
		if (walls.IsHit(snake) || snake.IsHitTail() ) {
			break;
		}
		if (snake.Eat(food)) {
			food = foodCteator.CreateFood();
			food.Draw();
		}
		else  {
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
