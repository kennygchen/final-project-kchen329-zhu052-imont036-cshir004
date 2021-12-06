#ifndef __NECROMANCERCHARACTER_CPP__
#define __NECROMANCERCHARACTER_CPP__

#include "../header/necromancerCharacter.hpp"

NecromancerCharacter::NecromancerCharacter(){
	this->name = "Necromancer";
	this->gold = 0;
	this->damage = 15;
	this->health = 40;
}

NecromancerCharacter::NecromancerCharacter(string name, int gold, int damage, int health){
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

NecromancerCharacter::~NecromancerCharacter(){

}

#endif
