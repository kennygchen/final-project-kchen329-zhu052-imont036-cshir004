#ifndef __TGROUPFACTORY_HPP__
#define __TGROUPFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "tgroupCharacter.hpp"

class TGroupFactory : public ClassTypeFactory {

public:
	TGroupFactory();
	~TGroupFactory();
	Character* createCharacter();
};

#endif
