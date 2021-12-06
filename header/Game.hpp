#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <string>
#include "ClassTypeFactory.hpp"
#include "WarriorFactory.hpp"
#include "RogueFactory.hpp"
#include "trollFactory.hpp"
#include "tgroupFactory.hpp"
#include "dragonFactory.hpp"
#include "skeletonFactory.hpp"
#include "skingFactory.hpp"
#include "necromancerFactory.hpp"

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
	int getHealth();
	int getDamage();
	void setHealth(int health);
	string getName();
};

#endif
