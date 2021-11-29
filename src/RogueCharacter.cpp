#ifndef __ROGUE_CHARACTER_CPP__
#define __ROGUE_CHARACTER_CPP__

#include "../header/RogueCharacter.hpp"

RogueCharacter::RogueCharacter() {
	this->name = "John Doe";
	this->gold = 50;
	this->damage = 5;
	this->health = 100;
}

RogueCharacter::RogueCharacter(string name, int gold, int damage, int health) {
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

RogueCharacter::~RogueCharacter() {

}

#endif
