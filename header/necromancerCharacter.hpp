#ifndef __NECROMANCERCHARACTER_HPP__
#define __NECROMANCERCHARACTER_HPP__

#include "Character.hpp"

class NecromancerCharacter : public Character {

public:
	NecromancerCharacter();
	NecromancerCharacter(string, int, int, int);
	~NecromancerCharacter();
};

#endif
