#ifndef __COMBAT_HPP__
#define __COMBAT_HPP__

#include <iostream>
#include <unistd.h>
#include "Game.hpp"

using std::cout;
using std::endl;
using std::cin;

class Combat {

private:
	int choice;
	bool alive;
	Game* player = new Game();
	Game* enemy = new Game();
	Game* enemy2 = new Game();

public:
	~Combat();
	void setPlayer(int choice);
	void displayShop();
	bool combat(int encounter, int battle);
	bool playerMock();
	bool enemyMock();
	bool damageMock();
	bool aliveMock();
	bool enemyAliveMock();
};

#endif
