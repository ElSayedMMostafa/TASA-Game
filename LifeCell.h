#include "Cell.h"
// LifeCell is a type of cell. When the player passes by this cell, his lifes increases +1.


class LifeCell : public Cell {
public:
	LifeCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};