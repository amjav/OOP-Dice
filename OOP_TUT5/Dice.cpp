#include "Dice.h"

Dice::Dice(RandomNumberGenerator* RandNum, int dice)
	: RandNum(RandNum) , dice(dice)
{
}

int Dice::GetDice() {
	return RandNum->GetRandomValue(6);
	//arrow dereferences
	//(*RandNum).GetRandomValue(6); the same as above
}