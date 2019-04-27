#include "Cell.h"

class DateCell : public Cell {
public:
	DateCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};