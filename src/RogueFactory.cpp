#include "../header/RogueFactory.hpp"

RogueFactory::RogueFactory() {

}

RogueFactory::~RogueFactory() {

}

Character* RogueFactory::createCharacter() {
	return new RogueCharacter();
}
