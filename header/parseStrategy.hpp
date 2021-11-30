#ifndef __PARSESTRATEGY_HPP__
#define __PARSESTRATEGY_HPP__

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "../header/Game.hpp"
using namespace std;

class ParseStrategy{

protected:
	Game* game = new Game();
	string text;
	ifstream quest;
	int choice;
public:
	virtual ~ParseStrategy();
	virtual void parseInterface() = 0;
};

class WarriorStrategy : public ParseStrategy {

private:

public:
	~WarriorStrategy();
	void parseInterface();

};

class RogueStrategy : public ParseStrategy {

private:

public:
	~RogueStrategy();
	void parseInterface();

};

class ParseContext {

private:
	ParseStrategy *strategy;
public:
	ParseContext(ParseStrategy* const strat) : strategy(strat){}
	~ParseContext();
	void parseContext();

};


#endif
