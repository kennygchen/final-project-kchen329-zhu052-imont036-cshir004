#ifndef __WARRIOR_FACTORY_TEST_HPP__
#define __WARRIOR_FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/ClassTypeFactory.hpp"
#include "../src/WarriorFactory.cpp"

TEST(WarriorFactoryTest, WarriorNameNotEmpty) {
    ClassTypeFactory* factory = new WarriorFactory();
	Character* warrior = factory->createCharacter();


	EXPECT_NE(warrior->getName(), "");

    delete warrior;
    delete factory;
}

TEST(WarriorFactoryTest, WarriorNameHaveGold) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* warrior = factory->createCharacter();

    EXPECT_NE(warrior->getGold(), 0);

    delete warrior;
    delete factory;
}

TEST(WarriorFactoryTest, WarriorNameCanDealDamage) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* warrior = factory->createCharacter();

    EXPECT_NE(warrior->getDamage(), 0);

    delete warrior;
    delete factory;
}

TEST(WarriorFactoryTest, WarriorNameHaveHealth) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* warrior = factory->createCharacter();

    EXPECT_NE(warrior->getHealth(), 0);

    delete warrior;
    delete factory;
}

TEST(WarriorFactoryTest, WarriorLevel) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* warrior = factory->createCharacter();
    warrior->setLevel(5);

    EXPECT_EQ(warrior->getLevel(), 5);

    delete warrior;
    delete factory;
}

TEST(WarriorFactoryTest, WarriorXp) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* warrior = factory->createCharacter();
    warrior->setXp(100);

    EXPECT_EQ(warrior->getXp(), 100);

    delete warrior;
    delete factory;
}

#endif //WARRIOR_FACTORY_TEST_HPP
