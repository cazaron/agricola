#pragma once

#include "resource.h"

//Public enums etc;
enum PlayerColour { BLUE, RED, GREEN, WHITE, PURPLE };
enum Resource {WOOD, CLAY, STONE, REED, GRAIN, VEGETABLE, SHEEP, WILD_BOAR, CATTLE, FENCES, STABLE};
struct ActionSpace
{
	short int CardNum; //which card it is
	Player OccupiedBy;
	int AccumulatedResources;
};

struct FarmyardSpace
{

};

