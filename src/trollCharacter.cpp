#ifndef __TROLLCHARACTER_CPP__
#define __TROLLCHARACTER_CPP__

#include "../header/trollCharacter.hpp"

TrollCharacter::TrollCharacter() {
	this->name = "Troll";
	this->gold = 0;
	this->damage = 10;
	this->health = 20;
}

TrollCharacter::TrollCharacter(string name, int gold, int damage, int health){
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

TrollCharacter::~TrollCharacter() {

}

#endif
