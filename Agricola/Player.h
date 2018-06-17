#pragma once

/*
Player has 
Board State
Supply counts (resources, fences, stable) 
Cards
*/

#include "BoardState.h"
#include "Agricola.h"
#include "Card.h"
#include <vector>

class Player
{
public:
	Player();
	~Player();
	bool GiveCard(int CardIndex);
	bool RemoveCard(int CardIndex);
	bool PlayCard(int CardIndex);
private:
	BoardState PlayerBoard;
	int CurrentResources[11]; //Call on each resource by it's enum name 
	std::vector<Card> CardsInHand;
	std::vector<Card> CardsInPlay;
};