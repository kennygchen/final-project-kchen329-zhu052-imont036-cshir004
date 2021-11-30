#include "../header/parseStrategy.hpp"
#include <limits>
ParseStrategy::~ParseStrategy(){
	delete game;
}

void ParseStrategy::parseInterface(){

}

WarriorStrategy::~WarriorStrategy(){

}

void WarriorStrategy::parseInterface(){
	game->setFactory(1);
	game->createCharacter();
	quest.open("warriorQuest.txt");
	if (quest.is_open()){
		while (getline(quest, text)){
			if(text == "-combat-"){
				if (game->alive() == false){
					cout << "Game Over!" << endl;
					quest.close();
				}
			}
			else if(text == "-shop-")
				game->shop();
			else if(text == "-decision-"){
				cin >> choice;
				switch(choice){
				case 1:
					cout << endl;
					break;
				case 2:
					cout << endl;
					for (int i=1; i < 30; i++)
						quest.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}
			else if(text == "-end-")
				quest.close();
			else 
			cout << text << endl;
			sleep(1);
		}	
	}
	quest.close();
}

RogueStrategy::~RogueStrategy(){

}

void RogueStrategy::parseInterface(){
	game->setFactory(2);
	game->createCharacter();
	quest.open("rogueQuest.txt");
	if (quest.is_open()){
		while (getline(quest, text)){
			if(text == "-combat-"){
                                if (game->alive() == false){
					cout << "Game Over!" << endl;
					quest.close();
				}
			}
                        else if(text == "-shop-")
                                game->shop();
                        else if(text == "-decision-"){
                                cin >> choice;
                                switch(choice){
                                case 1:
					cout << endl;
                                        break;
                                case 2:
                                        for (int i=1; i < 22; i++)
                                                quest.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                }
			}
                        else if(text == "-end-")
                                quest.close();
			else
			cout << text << endl;
			sleep(1);
		}
	}
	quest.close();
}

ParseContext::~ParseContext(){
	delete strategy;
}

void ParseContext::parseContext(){
	strategy->parseInterface();
}
