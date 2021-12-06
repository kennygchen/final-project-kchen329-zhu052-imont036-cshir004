#include "../header/dragonFactory.hpp"

DragonFactory::DragonFactory(){

}

DragonFactory::~DragonFactory(){

}

Character* DragonFactory::createCharacter(){
	return new DragonCharacter();
}
