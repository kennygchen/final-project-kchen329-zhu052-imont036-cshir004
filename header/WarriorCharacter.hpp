#ifndef __WARRIOR_CHARACTER_HPP__
#define __WARRIOR_CHARACTER_HPP__

#include "Character.hpp"

class WarriorCharacter : public Character
{
public:
	WarriorCharacter();
	WarriorCharacter(string, int, int, int);
	~WarriorCharacter();
};

#endif
