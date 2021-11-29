#ifndef __ROGUE_CHARACTER_HPP__
#define __ROGUE_CHARACTER_HPP__

#include "Character.hpp"

class RogueCharacter : public Character
{
public:
	RogueCharacter();
	RogueCharacter(string, int, int, int);
	~RogueCharacter();
};

#endif
