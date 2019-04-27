#include "HoleCell.h"

HoleCell::HoleCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\hole.jpg";
}
bool HoleCell::ActOn(Player* p){
	// to be edited..
	return true;
}