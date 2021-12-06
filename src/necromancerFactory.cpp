#include "../header/necromancerFactory.hpp"

NecromancerFactory::NecromancerFactory(){

}

NecromancerFactory::~NecromancerFactory(){

}

Character* NecromancerFactory::createCharacter(){
	return new NecromancerCharacter();
}
