#ifndef __SKELETONCHARACTER_HPP__
#define __SKELETONCHARACTER_HPP__

#include "Character.hpp"

class SkeletonCharacter: public Character {

public:
	SkeletonCharacter();
	SkeletonCharacter(string, int, int, int);
	~SkeletonCharacter();
};

#endif
