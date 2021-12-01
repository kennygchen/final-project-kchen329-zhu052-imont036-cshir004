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
)

ADD_EXECUTABLE(test
	tests/test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
