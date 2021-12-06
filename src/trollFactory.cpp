#include "../header/trollFactory.hpp"

TrollFactory::TrollFactory() {

}

TrollFactory::~TrollFactory(){

}

Character* TrollFactory::createCharacter(){
	return new TrollCharacter();
}
