#ifndef __DRAGONCHARACTER_HPP__
#define __DRAGONCHARACTER_HPP__

#include "Character.hpp"

class DragonCharacter : public Character {

public:
	DragonCharacter();
	DragonCharacter(string, int, int, int);
	~DragonCharacter();
};

#endif
