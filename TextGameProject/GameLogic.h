#pragma once

class GameLogic
{
public:
	GameLogic();
	~GameLogic();

	//this function manages the keyboard events and returns if the game has ended or not
	bool processInput();
};

