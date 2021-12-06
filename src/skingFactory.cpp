#include "../header/skingFactory.hpp"

SKingFactory::SKingFactory(){

}

SKingFactory::~SKingFactory(){

}

Character* SKingFactory::createCharacter(){
	return new SKingCharacter();
}
