#ifndef __DRAGONCHARACTER_CPP__
#define __DRAGONCHARACTER_CPP__

#include "../header/dragonCharacter.hpp"

DragonCharacter::DragonCharacter() {
	this->name = "Dragon";
	this->gold = 0;
	this->damage = 20;
	this->health = 50;
}

DragonCharacter::DragonCharacter(string name, int gold, int damage, int health){
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

DragonCharacter::~DragonCharacter(){

}

#endif
