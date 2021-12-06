#include "../header/combat.hpp"

Combat::~Combat(){
	delete player;
	delete enemy;
	delete enemy2;
}

void Combat::setPlayer(int choice){
	player->setFactory(choice);
	player->createCharacter();	
}

void Combat::displayShop(){
	player->shop();
}

bool Combat::combat(int encounter, int battle){
	switch(battle){

	case 1:

	enemy->setFactory(encounter);
	enemy->createCharacter();
	cout << "You Face the Mighty " << enemy->getName() << "!" << endl;
	sleep(1);
	do {
		cout << "The " << enemy->getName() << " still has " << enemy->getHealth() << " health left! Will you (1) Attack or (2) Use a Potion?" << endl;
		cin >> choice;
		if (choice == 1){
			cout << "You attack the " << enemy->getName() << "!" << endl;
			sleep(1);
			cout << "You deal " << player->getDamage() << " damage to the " << enemy->getName() << "!" << endl;
			sleep(1);
			enemy->setHealth(enemy->getHealth() - player->getDamage());

			if (enemy->alive() == true){
				cout << "The " << enemy->getName() << " Retaliates and attacks you for " << enemy->getDamage() << " damage!" << endl;
				player->setHealth(player->getHealth() - enemy->getDamage());
				cout << "You only have " << player->getHealth() << " health left!" << endl;
				if (player->alive()  == false){
					cout << "Game Over!" << endl;
					alive = false;
					return alive;
				}
			}	
		}
		else if (choice == 2) 
			cout << "You Use a potion and recover health!" << endl;
			player->setHealth(player->getHealth() + 30);
	}
	while (enemy->alive() == true);	
	
	cout << "Congratulations! You defeated the " << enemy->getName() << "!" << endl;
	alive = true;
	return alive;

	case 2:

	enemy2->setFactory(encounter);
        enemy2->createCharacter();
        cout << "You Face the Mighty " << enemy2->getName() << "!" << endl;
        sleep(1);
        do {
                cout << "The " << enemy2->getName() << " still has " << enemy2->getHealth() << " health left! Will you (1) Attack or (2) Use a Potion?" << endl;
                cin >> choice;
                if (choice == 1){
                        cout << "You attack the " << enemy2->getName() << "!" << endl;
                        sleep(1);
                        cout << "You deal " << player->getDamage() << " damage to the " << enemy2->getName() << "!" << endl;
                        sleep(1);
                        enemy2->setHealth(enemy2->getHealth() - player->getDamage());

                        if (enemy2->alive() == true){
                                cout << "The " << enemy2->getName() << " Retaliates and attacks you for " << enemy2->getDamage() << " damage!" << endl;
                                player->setHealth(player->getHealth() - enemy2->getDamage());
				cout << "You only have " << player->getHealth() << " health left!" << endl;
                                if (player->alive()  == false){
                                        cout << "Game Over!" << endl;
                                        alive = false;
                                        return alive;
                                }
                        }
                }
                else if (choice == 2)
                        cout << "You Use a potion and recover health!" << endl;
			player->setHealth(player->getHealth() + 30);
        }
        while (enemy2->alive() == true);

        cout << "Congratulations! You defeated the " << enemy2->getName() << "!" << endl;
        alive = true;
        return alive;

}
}

bool Combat::playerMock(){
	player->setFactory(1);
	player->createCharacter();
	if (player->getHealth() == 100)
		return true;
	else
		return false;		
}

bool Combat::enemyMock(){
	enemy->setFactory(3);
	enemy->createCharacter();
	if (enemy->getHealth() == 20)
		return true;
	else
		return false;
}

bool Combat::damageMock(){
	player->setFactory(2);
	player->createCharacter();
	enemy->setFactory(3);
	enemy->createCharacter();
	enemy->setHealth(enemy->getHealth() - player->getDamage());
	if (enemy->getHealth() == 15)
		return true;
	else
		return false;
}

bool Combat::aliveMock(){
	player->setFactory(1);
	player->createCharacter();
	if (player->alive() == true)
		return true;
	else
		return false;
}

bool Combat::enemyAliveMock(){
	enemy->setFactory(8);
	enemy->createCharacter();
	if (enemy->alive() == true)
		return true;
	else
		return false;
}
