#ifndef __GAME_CPP__
#define __GAME_CPP__

#include "../header/Game.hpp"

Game::Game() {
	character = nullptr;
	factory = nullptr;
}

Game::~Game() {
	delete character;
	delete factory;
}

// Factory used to determine player class
void Game::setFactory(int type) {
	if(type == 1) {
		this->factory = new WarriorFactory();
	}
	else if(type == 2) {
		this->factory = new RogueFactory();
	}
}

void Game::createCharacter() {
	this->character = this->factory->createCharacter();
}

// Player can buy items to change stats 
void Game::shop() {
	int input;
	do {
		cout << endl;
		cout << "=====WELCOME TO THE SHOP=====" << endl;
		cout << "(WEAPONS)" << endl;
		cout << "1) Dagger --- 10 gold" << endl;
		cout << "2) Axe --- 100 gold" << endl;
		cout << "3) Sword --- 1000 gold" << endl;
		cout << "(POTIONS)" << endl;
		cout << "4) Health Potion --- 50 gold" << endl;
		cout << "(ARMOR)" << endl;
		cout << "5) Helmet --- 100 gold" << endl;
		cout << "6) Chestplate --- 1000 gold" << endl;
		cout << "7) Leave shop & enter dungeon" << endl;
		cin >> input;

		switch(input) {
			case 1:
				if(character->getGold() >= 10) {
					cout << "You purchased a dagger" << endl;
					character->setDamage(10);
					character->setGold(character->getGold()-10);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;	
			case 2:
				if(character->getGold() >= 100) {
					cout << "You purchased an axe" << endl;
					character->setDamage(15);
					character->setGold(character->getGold()-100);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;
			case 3:
				if(character->getGold() >= 1000) {
					cout << "You purchased a sword" << endl;
					character->setDamage(20);
					character->setGold(character->getGold()-1000);
				}
				else {
					cout << "You don't have enought gold. " << endl;
				}
				break;
			case 4:
				if(character->getGold() >= 50) {
					cout << "You purhcased a health potion." << endl;
					character->setGold(character->getGold()-50);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;
			case 5:
				if(character->getGold() >= 100) {
					cout << "You purchased a helmet" << endl;
					character->setGold(character->getGold()-100);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;
			case 6:
				if(character->getGold() >= 1000) {
					cout << "You purchased a chestplate." << endl;
					character->setGold(character->getGold()-1000);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;
			case 7:
				cout << "You exit the shop & make your way towards the dungeon!" << endl;
				break;
		}
	} while(input < 7);
}

// Determines whether character still has health
bool Game::alive() {
	if(character->getHealth() <= 0) {
		return false;
	}
	else {
		return true;
	}
}

// Where all the game events will take place
void Game::startGame() {
	shop();
	cout << "You enter the dungeon" << endl;

}

#endif
