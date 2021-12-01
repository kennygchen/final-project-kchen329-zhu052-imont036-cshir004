#include "gtest/gtest.h"
#include "warrior_character_test.hpp"
#include "rogue_character_test.hpp"
#include "warrior_factory_test.hpp"
#include "rogue_factory_test.hpp"

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}
