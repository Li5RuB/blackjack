#include "Deck.h"
#include <algorithm>
#include <random>

void Deck::InitDeck()
{
	std::vector<Card> new_deck = {
		Card(u8"2♣",2), Card(u8"2♦",2), Card(u8"2♥",2), Card(u8"2♠",2),
		Card(u8"3♣",3), Card(u8"3♦",3), Card(u8"3♥",3), Card(u8"3♠",3),
		Card(u8"4♣",4), Card(u8"4♦",4), Card(u8"4♥",4), Card(u8"4♠",4),
		Card(u8"5♣",5), Card(u8"5♦",5), Card(u8"5♥",5), Card(u8"5♠",5),
		Card(u8"6♣",6), Card(u8"6♦",6), Card(u8"6♥",6), Card(u8"6♠",6),
		Card(u8"7♣",7), Card(u8"7♦",7), Card(u8"7♥",7), Card(u8"7♠",7),
		Card(u8"8♣",8), Card(u8"8♦",8), Card(u8"8♥",8), Card(u8"8♠",8),
		Card(u8"9♣",9), Card(u8"9♦",9), Card(u8"9♥",9), Card(u8"9♠",9),
		Card(u8"10♣",10), Card(u8"10♦",10), Card(u8"10♥",10), Card(u8"10♠",10),
		Card(u8"J♣",10), Card(u8"J♦",10), Card(u8"J♥",10), Card(u8"J♠",10),
		Card(u8"Q♣",10), Card(u8"Q♦",10), Card(u8"Q♥",10), Card(u8"Q♠",10),
		Card(u8"K♣",10), Card(u8"K♦",10), Card(u8"K♥",10), Card(u8"K♠",10),
		Card(u8"A♣",11,1), Card(u8"A♦",11,1), Card(u8"A♥",11,1), Card(u8"A♠",11,1),
	};

	deck = std::stack<Card>(std::deque<Card>(new_deck.begin(), new_deck.end()));
}

Card Deck::GetTopCard()
{
	Card card = deck.top();
	deck.pop();

	return card;
}

using stack_c_ptr_t = std::deque<Card> std::stack<Card>::*;
constexpr stack_c_ptr_t stack_c_ptr();

template<stack_c_ptr_t p>
struct hack {
	friend constexpr stack_c_ptr_t stack_c_ptr() { return p; }
};

template struct hack<&std::stack<Card>::c>;

void Deck::ShuffleDeck()
{
	auto& c = deck.*stack_c_ptr();

	auto rng = std::default_random_engine{ std::random_device {}() };
	std::shuffle(c.begin(), c.end(), rng);
}

Deck::Deck()
{
	InitDeck();
}
