#ifndef __CLASS_TYPE_FACTORY__
#define __CLASS_TYPE_FACTORY__

#include "Character.hpp"

class ClassTypeFactory
{
public:
	virtual ~ClassTypeFactory() {}
	virtual Character* createCharacter() = 0;

};

#endif
