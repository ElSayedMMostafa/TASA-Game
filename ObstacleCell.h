#include "Cell.h"

class ObstacleCell : public Cell {
public:
	ObstacleCell(int r, int c); //default constructor
	bool ActOn(Player* p);
};