#include "LifeCell.h"

LifeCell::LifeCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\life.jpg";
}
bool LifeCell::ActOn(Player* p){
	// to be edited..
	return true;
}