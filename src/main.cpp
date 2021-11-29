#include <iostream>
#include <unistd.h>
#include "../header/Character.hpp"
//#include "../header/player.hpp"
#include "../header/Game.hpp"
#include <string>

using std::cout;
using std::endl;
using std::string;

void shop() {
	cout << "-----Welcome to the shop-----" << endl;
	cout << "1) Dagger --- 100 gold" << endl;
	cout << "2) Sword --- 200 gold" << endl;
	cout << "3) Leave shop " << endl;
	cout << "What would you like to purchase? " << endl;
	
	int input;
	cin >> input;
	
	if (input == 1) {
		cout << "You have purchased the dagger." << endl;
	}
	else if (input == 2) {
		cout << "You have purchased the sword." << endl;
	}
	else {
		cout << "You exit the shop" << endl;
	}
}

int main() {
	Game* game = new Game();
	int input;
	cout << "Choose a class: " << endl;
	cout << "1) Warrior " << endl;
	cout << "2) Rogue " << endl;
	cin >> input;

	game->setFactory(input);
	game->createCharacter();
	
	if (input == 1) {
		cout << "You find yourself separated from your village after the last battle" << endl;
		sleep(2);
		cout << "Your gear weighs you down, but you need to regroup with your village on the other side of a dungeon " << endl;
		sleep(2);
		cout << "On the way you stop in a small town to rest and stock up on gear" << endl;
		sleep(2);
	}
	else if (input == 2) {
		cout << "You find yourself on the run from authorities after betraying your village" << endl;
		sleep(2);
		cout << "You're light on your feet, but all the running as left you tired and low on resources" << endl;
		sleep(2);
		cout << "You stop at a small town for a drink. While there, you learn of a dungeon holding enough gold for a king" << endl;
		sleep(2);
		cout << "Before venturing in, you stop at the local shop for supplies" << endl;
	}
	while(game->alive()) {
		game->startGame();
	}

	return 0;
}

