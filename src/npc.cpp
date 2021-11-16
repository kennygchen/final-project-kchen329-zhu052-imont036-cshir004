#include "../header/npc.hpp"

Npc::Npc(string name){
	setName(name);
}

void Npc::setFriendly(bool friendly){
	this->friendly = friendly;
}

bool Npc::getFriendly(){
	return friendly;
}
