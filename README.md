# The Astral Eclipse

 > Group Members: [Isiah Montalvo](https://github.com/SwiftZephyr),
 >	          [Cole Shirakata](https://github.com/ColeShirakata),
 >	          [Kenny Chen](https://github.com/kennygchen),
 >	          [Zhouhang Hu](https://github.com/davidhu520)

## Project Description
 > The type of project we have chosen to create is a text-based role playing game that implements many features common to the RPG genre. This project is important to us because our group is mostly comprised of gamers who not only carry an ardent passion for gaming, but a deep respect for video game development and the impact it can have on lives around the world. We will primarily code this project using C++ and develop it using Hammer to interact with Git and Github which serves as our main form of communication and collaboration. The most common inputs that this application will receive will be in the form of decisions made by the user to advance the story and reach the end of the game. These decisions can include many different ways to interact with the game and story such as talking, attacking, and running from various scenarios and non-player characters. The output of this application involes the outcome of the decisions made by the user at various points during the game. These outputs can range from the story ending early due to incorrect decisions made by the user to reaching the end of the story and completing the game. Features that the user can interact with include but are not limited to: signup/login, talking, attacking, running, looting enemies, accessing inventory, using items, checking character status, and character classes with unique armor, weaponry, and abilities.   
 
> ## Phase II
## Class Diagram
 > ![class diagram](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/CS100%20Final%20Project%20Class%20Diagram.png?raw=true)
 > This diagram consists of the classes that will be present throughout our project. We have the character class which will be used to determine functionality for players, enemies, and NPC's. It possesses many of the members that will be used to determine stats and attributes of the character. The sub-classes will use these members along with their own to use functions that will be interacted with during gameplay such as dropping rewards and collecting rewards. The inventory class will help determine functionality for many of the various item properties including looting and shopping. This will help determine if the item is something equippable to the player as well as logic to determine if the item is used and should be removed from the inventory. There can exist many different items such as equippable weapons which increase damage dealt to enemies, armor which decreases damage taken from enemies, and usable items such as potions which will restore the players health. The combat class will be used to develop combat scenarios and player actions. This includes members to keep track of attack and defense and will use these during damage calculation during combat. The Menu class will utilize prompts and decisions to act upon the players requests. This includes the ability to gather the input of the player and display appropriate promps which will alter the conclusion of the scenario. This will be the primary form of navigating between scenarios throughout the game. 

 > ## Final deliverable
 ## Screenshots
 > ![1](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/1.png)
 > ![2](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/2.png)
 > ![3](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/3.png)
 > ![4](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/4.png)
 > ![5](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/5.png)
 > ![6](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/6.png)
 > ![7](https://github.com/cs100/final-project-kchen329-zhu052-imont036-cshir004/blob/master/7.png)
 ## Installation/Usage
 > There are no specific installation instructions to run this game. Simply clone the repository, run cmake ., then make, then ./main
 ## Testing
 > Our project was tested using the googletest framework. We used unit tests to ensure that each function worked accordingly throughout the design process
 
