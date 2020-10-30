#pragma once
#include "Score.h"
#include <string>
using namespace std;

class Player
{
	private:
		string name = "";
		Score score;
		
	public:
		Player(string name);
		string GetName();
};

