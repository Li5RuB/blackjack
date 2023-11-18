#include <iostream>
#include <string>
#include <stack>
#include "Deck.h"
#include "GameProcess.h"
#include "HandBase.h"
#include <Windows.h>
#include <cstdio>

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	auto game = GameProcess();

	game.StartGame(1);
	
	auto col = game.GetHands();

	auto croupier = col[0].GetCards();

	cout << "Croupier  ->  " << croupier[0].GetName() << croupier[1].GetName() << "\n";

	for (size_t i = 1; i < col.size(); i++)
	{
		auto c = col[i].GetCards();

		cout << "Gambler  ->  " << c[0].GetName() << c[1].GetName() << "\n";
	}
}
