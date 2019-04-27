#include "Cell.h"

class EnemyCell : public Cell {
public:
	EnemyCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};