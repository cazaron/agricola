#include "Player.h"

Player::Player()
{
	/* Initialise Resources */
	this->CurrentResources[WOOD] = 0;
	this->CurrentResources[CLAY] = 0;
	this->CurrentResources[REED] = 0;
	this->CurrentResources[STONE] = 0;
	this->CurrentResources[GRAIN] = 0;
	this->CurrentResources[VEGETABLE] = 0;
	this->CurrentResources[SHEEP] = 0;
	this->CurrentResources[WILD_BOAR] = 0;
	this->CurrentResources[CATTLE] = 0;
	this->CurrentResources[FENCES] = 15;
	this->CurrentResources[STABLE] = 4;
}