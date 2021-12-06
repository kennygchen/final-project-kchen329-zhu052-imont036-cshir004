#include "gtest/gtest.h"
#include "warrior_character_test.hpp"
#include "rogue_character_test.hpp"
#include "warrior_factory_test.hpp"
#include "rogue_factory_test.hpp"
#include "../header/parseStrategy.hpp"
#include "../header/combat.hpp"

TEST(ParseStrategyTest, WarriorContext){
	ParseContext warrior(new WarriorStrategy());

	EXPECT_EQ(true, warrior.contextMock());
}

TEST(ParseStrategyTest, RogueContext){
	ParseContext rogue(new RogueStrategy());

	EXPECT_EQ(true, rogue.contextMock()); 
}

TEST(ParseStrategyTest, WarriorInterface){
	ParseContext warrior(new WarriorStrategy());
	
	EXPECT_EQ(true, warrior.ctxIntMock());
}

TEST(ParseStrategyTest, RogueInterface){
	ParseContext rogue(new RogueStrategy());

	EXPECT_EQ(true, rogue.ctxIntMock());
}

TEST(ParseStrategyTest, Flags){
	ParseContext warrior(new WarriorStrategy());

	EXPECT_EQ(true, warrior.contextFlagMock());
}

TEST(CombatTest, PlayerInitialized){
	Combat* game = new Combat();
	
	EXPECT_EQ(true, game->playerMock());
	delete game;
}

TEST(CombatTest, EnemyInitialized){
	Combat* game = new Combat();

	EXPECT_EQ(true, game->enemyMock());
	delete game;
}

TEST(CombatTest, DamageCalculation){
	Combat* game = new Combat();

	EXPECT_EQ(true, game->damageMock());
	delete game;
}

TEST(CombatTest, PlayerAlive){
	Combat* game = new Combat();

	EXPECT_EQ(true, game->aliveMock());
	delete game;
}

TEST(CombatTest, EnemyAlive){
	Combat* game = new Combat();

	EXPECT_EQ(true, game->enemyAliveMock());
	delete game;
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}
