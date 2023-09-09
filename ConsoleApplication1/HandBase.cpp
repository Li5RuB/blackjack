#include "HandBase.h"

int HandBase::GetCardsSum()
{
	int sum = 0;
	for (auto it = Cards.begin(); it != Cards.end(); it++) {
		auto value = ((Card)*it).GetValue(false);
		auto value2 = ((Card)*it).GetValue(true);

		if (value + sum > 21 && value == 11){
			sum += value2;
		}else {
			sum += value;
		}
	}
	return sum;
}

vector<Card> HandBase::GetCards()
{
	return Cards;
}

vector<Card> HandBase::AddCard(Card card)
{
	Cards.push_back(card);
	return Cards;
}
