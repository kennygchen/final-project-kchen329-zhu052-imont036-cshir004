#ifndef __ROGUE_FACTORY_TEST_HPP__
#define __ROGUE_FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/ClassTypeFactory.hpp"
#include "../src/RogueFactory.cpp"

TEST(RogueFactoryTest, RogueNameNotEmpty) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();

    EXPECT_NE(rogue->getName(), "");

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameHaveGold) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();
    rogue->setGold(10);

    EXPECT_EQ(rogue->getGold(), 10);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameCanDealDamage) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();
    rogue->setDamage(85);

    EXPECT_EQ(rogue->getDamage(), 85);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameHaveHealth) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();
	rogue->setHealth(10);

    EXPECT_EQ(rogue->getHealth(), 10);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueLevel) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();
    rogue->setLevel(5);

    EXPECT_EQ(rogue->getLevel(), 5);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueXp) {
    ClassTypeFactory* factory = new RogueFactory();
    Character* rogue = factory->createCharacter();
    rogue->setXp(100);

    EXPECT_EQ(rogue->getXp(), 100);

    delete rogue;
    delete factory;
}

#endif //ROGUE_FACTORY_TEST_HPP
