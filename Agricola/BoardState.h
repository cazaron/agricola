#pragma once

/*
BoardState has
Cells - for Rooms, Fields, Pastures
Edges - for Fences
*/

#include "Agricola.h"

class BoardState
{
public:
	BoardState();
	~BoardState();
	bool ModifyFarmyardSpaceType(int row, int column);
	bool ModifyFences(); //Not sure yet re variables
private:
	FarmyardSpace Farmyard[3][5];
};