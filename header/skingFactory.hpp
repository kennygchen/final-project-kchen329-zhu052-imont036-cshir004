#ifndef __SKINGFACTORY_HPP__
#define __SKINGFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "skingCharacter.hpp"

class SKingFactory : public ClassTypeFactory {

public:
	SKingFactory();
	~SKingFactory();
	Character* createCharacter();
};

#endif
