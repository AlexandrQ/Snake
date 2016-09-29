
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"

using namespace std;

int main() {

	HorizontalLine line1(5, 15, 5, '*');
	line1.drawHLine();

	_getch();
	return 0;
}
