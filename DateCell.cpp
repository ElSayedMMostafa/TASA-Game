#include "DateCell.h"

DateCell::DateCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\dates.jpg";
}
bool DateCell::ActOn(Player* p){
	// to be edited..
	return true;
}