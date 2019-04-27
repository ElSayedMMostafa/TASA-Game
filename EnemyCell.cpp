#include "EnemyCell.h"

EnemyCell::EnemyCell(int r, int c):Cell(r,c){
	SetRow(r);
	SetCol(c);
	ImagePath = "images\\MenuItems\\enemy.jpg";
}
bool EnemyCell::ActOn(Player* p){
	// to be edited..
	return true;
}