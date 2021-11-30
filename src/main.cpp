#include <iostream>
#include <string>
#include "../header/parseStrategy.hpp"
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
	int input;
	cout << "Choose a class: " << endl;
	cout << "1) Warrior " << endl;
	cout << "2) Rogue " << endl;
	cin >> input;

	if (input == 1) {
		ParseContext warrior(new WarriorStrategy());
		warrior.parseContext();	
	}
	else if (input == 2) {
		ParseContext rogue(new RogueStrategy());
		rogue.parseContext();
	}

	return 0;
}

