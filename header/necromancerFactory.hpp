#ifndef __NECROMANCERFACTORY_HPP__
#define __NECROMANCERFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "necromancerCharacter.hpp"

class NecromancerFactory : public ClassTypeFactory {

public:
	NecromancerFactory();
	~NecromancerFactory();
	Character* createCharacter();
};

#endif
