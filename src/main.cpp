#include <iostream>
#include <string>
#include "../header/parseStrategy.hpp"
using std::cout;
using std::endl;
using std::string;

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

