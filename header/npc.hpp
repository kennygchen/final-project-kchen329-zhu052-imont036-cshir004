#ifndef __NPC_HPP__
#define __NPC_HPP__

#include "character.hpp"

class Npc : public Character
{
private:
	bool friendly;

public:
	Npc(string name):Character(name) {};
	void setFriendly(bool friendly);
	bool getFriendly();
};

#endif
