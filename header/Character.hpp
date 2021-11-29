#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
	string name;
	int level;
	int xp;
	int gold;
	int damage;
	int health;
public:
	virtual ~Character() {}
	string getName() const {
		return this->name;
	}
	void setLevel(int level) {
		this->level = level;
	}
	int getLevel() {
		return level;
	}
	void setXp(int xp) {
		this->xp = xp;
	}
	int getXp() {
		return xp;
	}
	void setGold(int gold) {
		this->gold = gold;
	}
	int getGold() {
		return gold;
	}
	void setDamage(int damage) {
		this->damage = damage;
	}
	int getDamage() {
		return damage;
	}
	void setHealth(int health) {
		this->health = health;
	}
	int getHealth() {
		return health;
	}
};

#endif

