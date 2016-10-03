#include "Walls.h"



Walls::Walls(int mapWidth, int mapHeigth)		//рисуем рамку
{
	HorizontalLine upline(1, mapWidth - 2, 1, '*');
	HorizontalLine downine(1, mapWidth - 2, mapHeigth - 2, '*');
	VertikalLine leftLine(1, mapHeigth - 2, 1, '*');
	VertikalLine rightLine(1, mapHeigth - 2, mapWidth - 2, '*');

	wallList.push_back(upline);
	wallList.push_back(downine);
	wallList.push_back(leftLine);
	wallList.push_back(rightLine);
}


Walls::~Walls()
{
}

bool Walls::IsHit(Figure figure) {
	list<Figure>::iterator iter;
	iter = wallList.begin();
	for (; iter != wallList.end(); iter++) {
		if (iter -> IsHit(figure)) {
			return true;
		}
	}
	return false;
}

void Walls::Draw() {
	list<Figure>::iterator iter;
	iter = wallList.begin();
	for (; iter != wallList.end(); iter++) {
		iter->drawLine();
	}
}

