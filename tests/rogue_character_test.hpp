#ifndef __ROGUE_CHARACTER_TEST_HPP__
#define __ROGUE_CHARACTER_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/RogueCharacter.cpp"

TEST(RogueCharacterTest, RogueCharacterName) {
	Character* rogue = new RogueCharacter();
	EXPECT_EQ(rogue->getName(), "John Doe");
   	delete rogue;
}

TEST(RogueCharacterTest, RogueCharacterGold) {
	Character* rogue = new RogueCharacter();
	EXPECT_EQ(rogue->getGold(), 50);
	delete rogue;
}

TEST(RogueCharacterTest, RogueCharacterDamage) {
	Character* rogue = new RogueCharacter();
	EXPECT_EQ(rogue->getDamage(), 5);
	delete rogue;
}

TEST(RogueCharacterTest, RogueCharacterHealth) {
	Character* rogue = new RogueCharacter();
	EXPECT_EQ(rogue->getHealth(), 100);
	delete rogue;
}
#endif //ROGUE_CHARACTER_TEST_HPP
