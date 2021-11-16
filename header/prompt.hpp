#ifndef __PROMPT_HPP__
#define __PROMPT_HPP__

#include <iostream>
#include <string>

using namespace std;

class Prompt {

protected:
	string prompt;
public:
	Prompt(string prompt);
	void displayPrompt();
	void setPrompt(string prompt);
};

#endif
