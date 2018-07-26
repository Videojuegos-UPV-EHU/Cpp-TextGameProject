#pragma once

#include <string>

class World
{

public:
	World(std::string nameFile);

	~World();

	//this methods should clear the console and draw the current state of the game
	void draw();
};