#ifndef __TROLLFACTORY_HPP__
#define __TROLLFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "trollCharacter.hpp"

class TrollFactory : public ClassTypeFactory {

public:
	TrollFactory();
	~TrollFactory();
	Character* createCharacter();
};

#endif
