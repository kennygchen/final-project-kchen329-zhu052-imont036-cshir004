#include "../header/skeletonFactory.hpp"

SkeletonFactory::SkeletonFactory(){

}

SkeletonFactory::~SkeletonFactory(){

}

Character* SkeletonFactory::createCharacter(){
	return new SkeletonCharacter();
}
