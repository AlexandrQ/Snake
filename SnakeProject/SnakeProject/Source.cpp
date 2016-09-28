
#include <conio.h>
#include "Cursor.h"

using namespace std;

int main() {

	Cursor1 b1(30, 15, '*'), b2, b3(5, 10, '%');
	b1.draw();
	b2.draw();
	b3.draw();	

	_getch();
	return 0;
}
