#pragma once

/*
GameState has
Action List -> randomise 5-7, 8-10 etc then populate available actions array with card order
Which are taken, by who
Current turn/List of turn order (latter allows guest tokens)
Value on Accumulation spaces
*/

#include "Agricola.h"

class GameState
{
public:
	GameState();
	~GameState();
	PlayerColour GetCurrentTurn();
	PlayerColour SetCurrentTurn();
	bool PrepareActionSpaces(int round);
private:
	PlayerColour CurrentTurn; //May be worth populating a TurnOrder Array/Vector instead of this
	ActionSpace ActionSpaces[14];
	short int currentRound;
};