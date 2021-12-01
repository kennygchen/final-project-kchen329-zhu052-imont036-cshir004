#ifndef __ROGUE_FACTORY_TEST_HPP__
#define __ROGUE_FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/ClassTypeFactory.hpp"
#include "../header/RogueFactory.hpp"

TEST(RogueFactoryTest, RogueNameNotEmpty) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* rogue = factory->createCharacter();

    EXPECT_NE(rogue->getName(), "");

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameHaveGold) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* rogue = factory->createCharacter();

    EXPECT_NE(rogue->getGold(), 0);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameCanDealDamage) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* rogue = factory->createCharacter();

    EXPECT_NE(rogue->getDamage(), 0);

    delete rogue;
    delete factory;
}

TEST(RogueFactoryTest, RogueNameHaveHealth) {
    ClassTypeFactory* factory = new WarriorFactory();
    Character* rogue = factory->createCharacter();

    EXPECT_NE(rogue->getHealth(), 0);

    delete rogue;
    delete factory;
}

#endif //ROGUE_FACTORY_TEST_HPP
