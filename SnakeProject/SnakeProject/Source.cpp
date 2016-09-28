#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)			//устанавливаем курсор в указанные координаты
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
	gotoxy(3, 3);
	cout << "*" << endl;

	system("PAUSE");
	return 0;
}
