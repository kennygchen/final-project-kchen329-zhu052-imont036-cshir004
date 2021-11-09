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
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
