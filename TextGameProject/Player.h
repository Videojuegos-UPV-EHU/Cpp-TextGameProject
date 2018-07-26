#pragma once



class Player
{

public:
	
	Player();
	~Player();

	//estas funciones tienen que llamar a move()
	char moveUp();
	char moveDown();
	char moveRight();
	char moveLeft();
};

