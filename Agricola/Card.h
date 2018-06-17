#pragma once

/* 
Card has class/struct outlining how said card works
Occupation
Minor
Major
*/

enum CardType {OCCUPATION, MINOR_IMPROVEMENT, MAJOR_IMPROVEMENT};

class Card
{
public:
	Card();
	~Card();
private:
	CardType type;
};