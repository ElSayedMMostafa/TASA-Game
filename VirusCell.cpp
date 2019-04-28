#include "VirusCell.h"

VirusCell::VirusCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\virus.jpg";
}
bool VirusCell::ActOn(Player* p){
	// to be edited..
	return true;
}