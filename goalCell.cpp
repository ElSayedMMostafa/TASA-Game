#include "goalCell.h"

goalCell::goalCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\goal.jpg";
}
bool goalCell::ActOn(Player* p){
	// to be edited..
	return true;
}