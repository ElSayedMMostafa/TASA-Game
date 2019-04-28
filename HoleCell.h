#include "Cell.h"
// HoleCell is a type of cell. When the player passes in this cell, he is moved automatically to another random cell.

class HoleCell : public Cell {
public:
	HoleCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};