#pragma once
#include <vector>
#include <stack>
#include "Card.h"

using namespace std;

class Deck
{
	private: 
		stack<Card> deck;
	public:
		void InitDeck();
		Card GetTopCard();
		void ShuffleDeck();
		Deck();
};

