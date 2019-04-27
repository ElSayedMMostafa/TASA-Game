#include "GoalCell.h"

GoalCell::GoalCell(int r, int c) :Cell(r, c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\goal.jpg";
}
bool GoalCell::ActOn(Player* p){
	// to be edited..
	return true;
}