#include "Cell.h"

class LifeCell : public Cell {
public:
	LifeCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};