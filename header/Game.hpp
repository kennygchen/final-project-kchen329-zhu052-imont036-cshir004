#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "ClassTypeFactory.hpp"
#include "WarriorFactory.hpp"
#include "RogueFactory.hpp"

class Game
{
private:
	Character* character;
	ClassTypeFactory* factory;
public:
	Game();
	~Game();
	void setFactory(int);
	void createCharacter();
	void shop();
	bool alive();
	void startGame();
};

#endif
