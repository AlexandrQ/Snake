
#include <conio.h>
#include "Cursor.h"
#include "HorizontalLine.h"
#include "VertikalLine.h"

using namespace std;

int main() {

	system("mode con cols=100 lines=40");

	HorizontalLine Hline1(1, 98, 1, '*');
	HorizontalLine Hline2(1, 98, 38, '*');
	VertikalLine VLine1(1, 38, 1, '*');
	VertikalLine VLine2(1, 38, 98, '*');
	
	Hline1.drawLine();
	Hline2.drawLine();
	VLine1.drawLine();	
	VLine2.drawLine();

	_getch();
	return 0;
}
