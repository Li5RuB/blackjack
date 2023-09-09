#pragma once
#include <vector>
#include "Card.h"

class HandBase
{
protected:
	std::vector<Card> Cards;
public:
	int GetCardsSum();
	vector<Card> GetCards();
	vector<Card> AddCard(Card card);
};