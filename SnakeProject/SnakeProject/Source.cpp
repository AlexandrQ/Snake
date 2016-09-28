#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y, char z)			//устанавливаем курсор в указанные координаты
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << z << endl;
}

int main() {
	gotoxy(3, 3, '*');
	

	system("PAUSE");
	return 0;
}
