#pragma once
#include "HandBase.h"
class GameProcess
{
public:
	void StartGame(int numberOfPlayers);
	vector<HandBase> GetHands();
private:
	vector<HandBase> hands;
};

