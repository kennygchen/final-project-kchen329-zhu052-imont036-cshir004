#ifndef __SKELETONCHARACTER_CPP__
#define __SKELETONCHARACTER_CPP__

#include "../header/skeletonCharacter.hpp"

SkeletonCharacter::SkeletonCharacter(){
	this->name = "Skeleton";
	this->gold = 0;
	this->damage = 10;
	this->health = 20;
}

SkeletonCharacter::SkeletonCharacter(string name, int gold, int damage, int health){
	this->name = name;
	this->gold = gold;
	this->damage = damage;
	this->health = health;
}

SkeletonCharacter::~SkeletonCharacter(){

}

#endif
