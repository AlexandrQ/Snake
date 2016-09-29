
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"

using namespace std;

int main() {

	HorizontalLine Hline1(5, 15, 5, '*');
	Hline1.drawHLine();

	VertikalLine VLine(5, 15, 15, '#');
	VLine.drawVLine();

	_getch();
	return 0;
}
