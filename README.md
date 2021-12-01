# The Astral Eclipse

 Group Members: [Isiah Montalvo](https://github.com/SwiftZephyr),
           [Cole Shirakata](https://github.com/ColeShirakata),
 	          [Kenny Chen](https://github.com/kennygchen),
 	          [Zhouhang Hu](https://github.com/davidhu520)

## Project Description
The type of project we have chosen to create is a text-based role playing game that implements many features common to the RPG genre. This project is important to us because our group is mostly comprised of gamers who not only carry an ardent passion for gaming, but a deep respect for video game development and the impact it can have on lives around the world. We will primarily code this project using C++ and develop it using Hammer to interact with Git and Github which serves as our main form of communication and collaboration. The most common inputs that this application will receive will be in the form of decisions made by the user to advance the story and reach the end of the game. These decisions can include many different ways to interact with the game and story such as talking, attacking, and running from various scenarios and non-player characters. The output of this application involes the outcome of the decisions made by the user at various points during the game. These outputs can range from the story ending early due to incorrect decisions made by the user to reaching the end of the story and completing the game. Features that the user can interact with include but are not limited to: signup/login, talking, attacking, running, looting enemies, accessing inventory, using items, checking character status, and character classes with unique armor, weaponry, and abilities.   
 
## Class Diagram
 ![class diagram](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/CS100%20Final%20Project%20Class%20Diagram.png?raw=true)
This diagram consists of the classes that will be present throughout our project. We have the character class which will be used to determine functionality for players, enemies, and NPC's. It possesses many of the members that will be used to determine stats and attributes of the character. The sub-classes will use these members along with their own to use functions that will be interacted with during gameplay such as dropping rewards and collecting rewards. The inventory class will help determine functionality for many of the various item properties including looting and shopping. This will help determine if the item is something equippable to the player as well as logic to determine if the item is used and should be removed from the inventory. There can exist many different items such as equippable weapons which increase damage dealt to enemies, armor which decreases damage taken from enemies, and usable items such as potions which will restore the players health. The combat class will be used to develop combat scenarios and player actions. This includes members to keep track of attack and defense and will use these during damage calculation during combat. The Menu class will utilize prompts and decisions to act upon the players requests. This includes the ability to gather the input of the player and display appropriate promps which will alter the conclusion of the scenario. This will be the primary form of navigating between scenarios throughout the game. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 Using git, clone the repository, and `cd` into it.
```
git clone https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004.git
cd final-project-kchen329-zhu052-imont036-cshir004
```

This project uses `cmake3` as well as `make`. These tools are available on Linux, and can be installed from their respective websites. After they’re installed, the following commands can be run to create executables. Optionally, Valgrind can also be installed to check for memory leaks in the program.

```
cmake3 .
make
```

The following executables will be created

```
main
test
```

Running `./main` will start the game.

 ## Testing
After following the instructions in the **Installation/Usage** section, running `./test` will run the unit tests for this program. For this project, we had a total of 20 unit tests from 4 different suites.

We also used Valgrind to make sure that there were no memory leaks in the program. We ran Valgrind against the `main` executable as well as the `test` executable to be sure that all memory allocated was also deallocated. This test can be run using `valgrind --leak-check=full ./main` or `valgrind --leak-check=full ./test` to test the respective program.

 <details><summary>Valgrind results and Google Tests</summary>
<p>
 
```
==46088== Memcheck, a memory error detector
==46088== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==46088== Using Valgrind-3.12.0 and LibVEX; rerun with -h for copyright info
==46088== Command: ./test
==46088==
[==========] Running 20 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 4 tests from WarroirCharacterTest
[ RUN      ] WarroirCharacterTest.WarriorCharacterName
[       OK ] WarroirCharacterTest.WarriorCharacterName (17 ms)
[ RUN      ] WarroirCharacterTest.WarriorCharacterGold
[       OK ] WarroirCharacterTest.WarriorCharacterGold (2 ms)
[ RUN      ] WarroirCharacterTest.WarriorCharacterDamage
[       OK ] WarroirCharacterTest.WarriorCharacterDamage (2 ms)
[ RUN      ] WarroirCharacterTest.WarriorCharacterHealth
[       OK ] WarroirCharacterTest.WarriorCharacterHealth (2 ms)
[----------] 4 tests from WarroirCharacterTest (35 ms total)

[----------] 4 tests from RogueCharacterTest
[ RUN      ] RogueCharacterTest.RogueCharacterName
[       OK ] RogueCharacterTest.RogueCharacterName (2 ms)
[ RUN      ] RogueCharacterTest.RogueCharacterGold
[       OK ] RogueCharacterTest.RogueCharacterGold (2 ms)
[ RUN      ] RogueCharacterTest.RogueCharacterDamage
[       OK ] RogueCharacterTest.RogueCharacterDamage (2 ms)
[ RUN      ] RogueCharacterTest.RogueCharacterHealth
[       OK ] RogueCharacterTest.RogueCharacterHealth (2 ms)
[----------] 4 tests from RogueCharacterTest (10 ms total)

[----------] 6 tests from WarriorFactoryTest
[ RUN      ] WarriorFactoryTest.WarriorNameNotEmpty
[       OK ] WarriorFactoryTest.WarriorNameNotEmpty (3 ms)
[ RUN      ] WarriorFactoryTest.WarriorNameHaveGold
[       OK ] WarriorFactoryTest.WarriorNameHaveGold (2 ms)
[ RUN      ] WarriorFactoryTest.WarriorNameCanDealDamage
[       OK ] WarriorFactoryTest.WarriorNameCanDealDamage (2 ms)
[ RUN      ] WarriorFactoryTest.WarriorNameHaveHealth
[       OK ] WarriorFactoryTest.WarriorNameHaveHealth (2 ms)
[ RUN      ] WarriorFactoryTest.WarriorLevel
[       OK ] WarriorFactoryTest.WarriorLevel (2 ms)
[ RUN      ] WarriorFactoryTest.WarriorXp
[       OK ] WarriorFactoryTest.WarriorXp (2 ms)
[----------] 6 tests from WarriorFactoryTest (18 ms total)

[----------] 6 tests from RogueFactoryTest
[ RUN      ] RogueFactoryTest.RogueNameNotEmpty
[       OK ] RogueFactoryTest.RogueNameNotEmpty (3 ms)
[ RUN      ] RogueFactoryTest.RogueNameHaveGold
[       OK ] RogueFactoryTest.RogueNameHaveGold (2 ms)
[ RUN      ] RogueFactoryTest.RogueNameCanDealDamage
[       OK ] RogueFactoryTest.RogueNameCanDealDamage (2 ms)
[ RUN      ] RogueFactoryTest.RogueNameHaveHealth
[       OK ] RogueFactoryTest.RogueNameHaveHealth (2 ms)
[ RUN      ] RogueFactoryTest.RogueLevel
[       OK ] RogueFactoryTest.RogueLevel (2 ms)
[ RUN      ] RogueFactoryTest.RogueXp
[       OK ] RogueFactoryTest.RogueXp (2 ms)
[----------] 6 tests from RogueFactoryTest (18 ms total)

[----------] Global test environment tear-down
[==========] 20 tests from 4 test suites ran. (150 ms total)
[  PASSED  ] 20 tests.
==46088==
==46088== HEAP SUMMARY:
==46088==     in use at exit: 0 bytes in 0 blocks
==46088==   total heap usage: 691 allocs, 691 frees, 101,040 bytes allocated
==46088==
==46088== All heap blocks were freed -- no leaks are possible
==46088==
==46088== For counts of detected and suppressed errors, rerun with: -v
==46088== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
