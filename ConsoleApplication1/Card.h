#pragma once
#include <string>

using namespace std;

class Card
{
	private: 
		string Name;
		int Value;
		int Value2;
	public:
		string GetName();
		int GetValue(bool value2);
		Card(string name, int value);
		Card(string name, int value, int value2);
};

