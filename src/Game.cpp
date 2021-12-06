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
	else if(type == 3) {
		this->factory = new TrollFactory();
	}
	else if(type == 4) {
		this->factory = new TGroupFactory();
	}
	else if(type == 5) {
		this->factory = new DragonFactory();
	}
	else if(type == 6) {
		this->factory = new SkeletonFactory();
	}
	else if(type == 7) {
		this->factory = new SKingFactory();
	}
	else if(type == 8) {
		this->factory = new NecromancerFactory();
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
		cout << "Your Gold: " << character->getGold() << endl;
		cout << endl;
		cout << "(WEAPONS)" << endl;
		cout << "1) Sword --- 10 gold" << endl;
		cout << "(POTIONS)" << endl;
		cout << "2) Health Potion --- 50 gold" << endl;
		cout << endl;
		cout << "3) Leave shop & enter dungeon" << endl;
		cin >> input;
		cout << endl;

		switch(input) {
			case 1:
				if(character->getGold() >= 10) {
					cout << "You purchased a sword" << endl;
					character->setDamage(10);
					character->setGold(character->getGold()-10);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;	
			case 2:
					if(character->getGold() >= 50) {
					cout << "You purhcased a health potion." << endl;
					character->setGold(character->getGold()-50);
				}
				else {
					cout << "You don't have enough gold." << endl;
				}
				break;
			case 3:
				cout << "You exit the shop & make your way towards the dungeon!" << endl;
				break;
		}
	} while(input < 3);
}

int Game::getHealth(){
	return character->getHealth();
}

int Game::getDamage(){
	return character->getDamage();
}

void Game::setHealth(int health){
	character->setHealth(health);
}

string Game::getName(){
	return character->getName();
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
