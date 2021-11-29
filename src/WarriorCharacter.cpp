#ifndef __WARRIOR_CHARACTER_CPP__
#define __WARRIOR_CHARACTER_CPP__

#include "../header/WarriorCharacter.hpp"

WarriorCharacter::WarriorCharacter() {
	this->name = "John Doe";
	this->gold = 50;
	this->damage = 5;
	this->health = 100;
}

WarriorCharacter::WarriorCharacter(string name, int gold, int daamge, int health) {
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

WarriorCharacter::~WarriorCharacter() {

}

#endif
