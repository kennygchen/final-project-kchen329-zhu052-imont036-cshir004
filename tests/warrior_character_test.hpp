#ifndef __WARRIOR_CHARACTER_TEST_HPP__
#define __WARRIOR_CHARACTER_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/WarriorCharacter.cpp"

TEST(WarroirCharacterTest, WarriorCharacterName) {
	Character* warrior = new WarriorCharacter();
	EXPECT_EQ(warrior->getName(), "John Doe");
   	delete warrior;
}

TEST(WarroirCharacterTest, WarriorCharacterGold) {
	Character* warrior = new WarriorCharacter();
	EXPECT_EQ(warrior->getGold(), 50);
	delete warrior;
}

TEST(WarroirCharacterTest, WarriorCharacterDamage) {
	Character* warrior = new WarriorCharacter();
	EXPECT_EQ(warrior->getDamage(), 5);
	delete warrior;
}

TEST(WarroirCharacterTest, WarriorCharacterHealth) {
	Character* warrior = new WarriorCharacter();
	EXPECT_EQ(warrior->getHealth(), 100);
	delete warrior;
}
#endif //WARRIOR_CHARACTER_TEST_HPP
