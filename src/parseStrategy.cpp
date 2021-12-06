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
	battle = 1;
	encounter = 3;
	game->setPlayer(1);	
	quest.open("warriorQuest.txt");
	if (quest.is_open()){
		while (getline(quest, text)){
			if(text == "-combat-"){
				alive = game->combat(encounter, battle);
				if (alive == false)
					quest.close();			
			}
			else if(text == "-shop-")
				game->displayShop();
			else if(text == "-decision-"){
				cin >> choice;
				switch(choice){
				case 1:
					battle = 2;
					encounter = 4;
					cout << endl;
					break;
				case 2:
					battle = 2;
					encounter = 5;
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

bool WarriorStrategy::parseMock(){
	return true;
}

bool WarriorStrategy::interfaceMock(){
	quest.open("warriorQuest.txt");
	if (quest.is_open())
		return true;
	else
		return false;
}

bool WarriorStrategy::textFlagMock(){
	quest.open("test.txt");
	while (getline(quest, text)){
		if (text == "-test-")
			return true;
	}
}

void RogueStrategy::parseInterface(){
	battle = 1;
	encounter = 6;
	game->setPlayer(2);
	quest.open("rogueQuest.txt");
	if (quest.is_open()){
		while (getline(quest, text)){
			if(text == "-combat-"){
                                alive = game->combat(encounter, battle);
				if (alive == false)
					quest.close();
			}
                        else if(text == "-shop-")
                                game->displayShop();
                        else if(text == "-decision-"){
                                cin >> choice;
                                switch(choice){
                                case 1:
					battle = 2;
					encounter = 7;
					cout << endl;
                                        break;
                                case 2:
					battle = 2;
					encounter = 8;
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

bool RogueStrategy::parseMock(){
	return true;
}

bool RogueStrategy::interfaceMock(){
	quest.open("rogueQuest.txt");
	if (quest.is_open())
		return true;
	else
		return false;
}

bool RogueStrategy::textFlagMock(){
	quest.open("test.txt");
	while (getline(quest, text)){
		if (text == "-test-")
			return true;
	}
}

ParseContext::~ParseContext(){
	delete strategy;
}

void ParseContext::parseContext(){
	strategy->parseInterface();
}

bool ParseContext::contextMock(){
	return strategy->parseMock();	
}

bool ParseContext::ctxIntMock(){
	return strategy->interfaceMock();
}

bool ParseContext::contextFlagMock(){
	return strategy->textFlagMock();
}
