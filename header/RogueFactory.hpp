#ifndef __ROGUE_FACTORY_HPP__
#define __ROGUE_FACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "RogueCharacter.hpp"

class RogueFactory : public ClassTypeFactory
{
public:
	RogueFactory();
	~RogueFactory();
	Character* createCharacter();
};

#endif
