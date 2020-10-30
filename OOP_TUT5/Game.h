#pragma once
#include "Player.h"
#include "Dice.h"

class Game
{
	//pointers are used:
		//1: so you dont have to create more than one of the same class if it is being used by all.
		//example: 2 dice would use the same randomnumberobject rather than creating two seperate objects
		//2: for the player allows a change in player as you are able to  change where the pointer for the player is pointing (a different player).
	public:
		Game(Player* player);
		Game() = default;

	private:
		Player* player = nullptr;
		//dont want composition therefore use a pointer

		//Create dice objects
		Dice Dice1;
		Dice Dice2;
};

