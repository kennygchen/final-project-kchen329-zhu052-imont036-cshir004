#ifndef __TGROUPCHARACTER_CPP__
#define __TGROUPCHARACTER_CPP__

#include "../header/tgroupCharacter.hpp"

TGroupCharacter::TGroupCharacter(){
	this->name = "Group of Trolls";
	this->gold = 0;
	this->damage = 15;
	this->health = 40;
}

TGroupCharacter::TGroupCharacter(string name, int gold, int damage, int health) {
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

TGroupCharacter::~TGroupCharacter() {

}

#endif
