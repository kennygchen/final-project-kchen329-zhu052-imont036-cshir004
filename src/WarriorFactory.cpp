#include "../header/WarriorFactory.hpp"

WarriorFactory::WarriorFactory() {

}

WarriorFactory::~WarriorFactory() {

}

Character* WarriorFactory::createCharacter() {
	return new WarriorCharacter();
}
