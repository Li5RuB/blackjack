#include "GameProcess.h"
#include <vector>
#include "CroupierHand.h"
#include "GamblerHand.h"
#include "Deck.h"

void GameProcess::StartGame(int numberOfPlayers)
{
	Deck deck = Deck();

	deck.ShuffleDeck();

	hands.push_back(CroupierHand());

	for (size_t i = 0; i < numberOfPlayers; i++)
	{
		hands.push_back(GamblerHand());
	};

	for (size_t i = 0; i < hands.size(); i++)
	{
		hands[i].AddCard(deck.GetTopCard());
		hands[i].AddCard(deck.GetTopCard());
	}
}

std::vector<HandBase> GameProcess::GetHands()
{
	return hands;
}
