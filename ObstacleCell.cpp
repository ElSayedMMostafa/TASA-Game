#include "ObstacleCell.h"

ObstacleCell::ObstacleCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\obstacle.jpg";
}
bool ObstacleCell::ActOn(Player* p){
	// to be edited..
	return true;
}