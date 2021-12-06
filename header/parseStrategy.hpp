#ifndef __PARSESTRATEGY_HPP__
#define __PARSESTRATEGY_HPP__

#include "combat.hpp"
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

class ParseStrategy{

protected:
	Combat* game = new Combat();
	int encounter;
	int battle;
	string text;
	ifstream quest;
	int choice;
	bool alive;
public:
	virtual ~ParseStrategy();
	virtual void parseInterface() = 0;
	virtual bool parseMock() = 0;
	virtual bool interfaceMock() = 0;
	virtual bool textFlagMock() = 0;	
};

class WarriorStrategy : public ParseStrategy {

private:

public:
	~WarriorStrategy();
	void parseInterface();
	bool parseMock();
	bool interfaceMock();
	bool textFlagMock();
};

class RogueStrategy : public ParseStrategy {

private:

public:
	~RogueStrategy();
	void parseInterface();
	bool parseMock();
	bool interfaceMock();
	bool textFlagMock();
};

class ParseContext {

private:
	ParseStrategy *strategy;
public:
	ParseContext(ParseStrategy* const strat) : strategy(strat){}
	~ParseContext();
	void parseContext();
	bool contextMock();
	bool ctxIntMock();
	bool contextFlagMock();

};


#endif
