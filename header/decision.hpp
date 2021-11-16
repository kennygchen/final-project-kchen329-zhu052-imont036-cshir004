#ifndef __DECISION_HPP__
#define __DECISION_HPP__

#include "prompt.hpp"

class Decision : public Prompt {
private:
	string prompt2;
	int decision;
public:
	Decision(string prompt):Prompt(prompt) {};
	int decision(string prompt, string prompt2);
};

#endif
