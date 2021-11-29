#ifndef __WARRIOR_FACTORY_HPP__
#define __WARRIOR_FACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "WarriorCharacter.hpp"

class WarriorFactory : public ClassTypeFactory
{
public:
	WarriorFactory();
	~WarriorFactory();
	Character* createCharacter();
};

#endif
