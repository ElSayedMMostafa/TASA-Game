#include "Cell.h"

class HoleCell : public Cell {
public:
	HoleCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};