// TextGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

#include "World.h"
#include "GameLogic.h"
#include "Player.h"
#include "System.h"


int main()
{
	World world("file.csv");
	Player player;
	Player player2;
	GameLogic game;


	bool gameEnded = false;

	while (!gameEnded)
	{
		world.draw();

		gameEnded= game.processInput();
	}

    return 0;
}

