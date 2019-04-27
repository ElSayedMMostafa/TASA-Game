#include "Cell.h"

class goalCell : public Cell {
public:
	goalCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};