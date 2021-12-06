CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
	src/main.cpp
	header/Character.hpp
	src/character.cpp
	src/WarriorFactory.cpp
	src/WarriorCharacter.cpp
	src/Game.cpp
	src/RogueFactory.cpp
	src/RogueCharacter.cpp
	src/parseStrategy.cpp
	src/trollCharacter.cpp
	src/trollFactory.cpp
	src/tgroupCharacter.cpp
	src/tgroupFactory.cpp
	src/dragonCharacter.cpp
	src/dragonFactory.cpp
	src/skeletonCharacter.cpp
	src/skeletonFactory.cpp
	src/skingCharacter.cpp
	src/skingFactory.cpp
	src/necromancerCharacter.cpp
	src/necromancerFactory.cpp
	src/combat.cpp
)

ADD_EXECUTABLE(test
	tests/test.cpp
	src/parseStrategy.cpp
	src/combat.cpp
	src/Game.cpp
	src/trollFactory.cpp
	src/tgroupFactory.cpp
	src/dragonFactory.cpp
	src/skeletonFactory.cpp
	src/skingFactory.cpp
	src/necromancerFactory.cpp
	src/trollCharacter.cpp
	src/tgroupCharacter.cpp
	src/dragonCharacter.cpp
	src/skeletonCharacter.cpp
	src/skingCharacter.cpp
	src/necromancerCharacter.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
