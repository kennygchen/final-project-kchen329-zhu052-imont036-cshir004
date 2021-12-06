#ifndef __TROLLCHARACTER_HPP__
#define __TROLLCHARACTER_HPP__

#include "Character.hpp"

class TrollCharacter : public Character {

public:
	TrollCharacter();
	TrollCharacter(string, int, int, int);
	~TrollCharacter();
};

#endif
