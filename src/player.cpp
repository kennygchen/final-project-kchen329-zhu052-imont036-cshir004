#include "../header/player.hpp"

int Player::getLevel() {
	return level;
}

int Player::getXp() {
	return xp;
}

int Player::getGold() {
	return gold;
}

int Player::getDamage() {
	return damage;
}

int Player::getArmor() {
	return armor;
}

void Player::setLevel(int level) {
	this->level = level;
}

void Player::setXp(int xp) {
	this->xp = xp;
}

void Player::setGold(int gold) {
	this->gold = gold;
}

void Player::setDamage(int damage) {
	this->damage = damage;
}

void Player::setArmor(int armor) {
	this->armor = armor;
}
