#include "../header/tgroupFactory.hpp"

TGroupFactory::TGroupFactory(){

}

TGroupFactory::~TGroupFactory(){

}

Character* TGroupFactory::createCharacter(){
	return new TGroupCharacter();
}
