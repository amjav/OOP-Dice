#pragma once
#include "RandomNumberGenerator.h" 
class Dice
{
	private:
		
		int dice = 0;
		Dice(RandomNumberGenerator* RandNum, int dice);
		

	public:
		RandomNumberGenerator* RandNum = nullptr;
		//dont want composition therefore use a pointer
		int GetDice();
		//getter

};

