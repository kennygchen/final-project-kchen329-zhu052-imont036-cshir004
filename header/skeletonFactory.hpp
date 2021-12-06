#ifndef __SKELETONFACTORY_HPP__
#define __SKELETONFACTORY_HPP__

#include "ClassTypeFactory.hpp"
#include "skeletonCharacter.hpp"

class SkeletonFactory : public ClassTypeFactory {

public:
	SkeletonFactory();
	~SkeletonFactory();
	Character* createCharacter();
};

#endif
