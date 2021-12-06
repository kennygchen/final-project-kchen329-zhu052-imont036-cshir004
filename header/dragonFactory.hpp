#ifndef __DRAGONFACTORY_HPP__
#define __DRAGONFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "dragonCharacter.hpp"

class DragonFactory : public ClassTypeFactory {

public:
	DragonFactory();
	~DragonFactory();
	Character* createCharacter();
};

#endif
