#include "Cell.h"

class VirusCell : public Cell {
public:
	VirusCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};