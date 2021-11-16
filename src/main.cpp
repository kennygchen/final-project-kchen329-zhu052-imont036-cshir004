#include <iostream>
#include <unistd.h>
#include "../header/character.hpp"
#include "../header/player.hpp"
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	string name;	

	cout << "You awaken in an unknown environment." << endl;
	sleep(2);
	cout << "You're lying in a forest next to some fallen trees and scorch marks. " << endl;
	sleep(2);
	cout << "You assess your situation. " << endl;
	sleep(2);
	cout << "You find a small dagger on your belt and a small, empty canteen. " << endl;
	sleep(2);
	cout << "You feel uneasy. Chills run down your skin and you sense a presense. " << endl;
	sleep(2);
	cout << "You spy a cloaked figure hiding in the trees. " << endl;
	sleep(2);
	cout << "The figure asks for your name in a deep, raspy voice. " << endl;
	sleep(2);
	cout << "You respond with your name: " << endl;

	cin >> name;
	Player player(name);
	cout << "Welcome, " + player.getName() << endl;	
	return 0;
}

