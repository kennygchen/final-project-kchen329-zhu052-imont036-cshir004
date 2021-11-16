#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
	string name;
	int health;
public:
	Character(string name);
	void setName(string name);
	void setHealth(int health);
	int getHealth();
	string getName();
};

#endif

