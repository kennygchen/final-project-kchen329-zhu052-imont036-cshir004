#ifndef __SKINGCHARACTER_CPP__
#define __SKINGCHARACTER_CPP__

#include "../header/skingCharacter.hpp"

SKingCharacter::SKingCharacter(){
	this->name = "Skeleton King";
	this->gold = 0;
	this->damage = 20;
	this->health = 50;
}

SKingCharacter::SKingCharacter(string name, int gold, int damage, int health){
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

SKingCharacter::~SKingCharacter(){

}

#endif
