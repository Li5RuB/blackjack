#include "Card.h"

string Card::GetName()
{
	return Name;
}

int Card::GetValue(bool value2)
{
	if (value2)
	{
		return Value2;
	}
	return Value;
}

Card::Card(string name, int value)
{
	Name = name;
	Value = value;
}

Card::Card(string name, int value, int value2)
{
	Name = name;
	Value = value;
	Value2 = value2;
}
