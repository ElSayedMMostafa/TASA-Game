#include "Cell.h"

class GoalCell : public Cell {
public:
	GoalCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};