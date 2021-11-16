#include "../header/prompt.hpp"

Prompt::Prompt(string prompt){
	this->prompt = prompt;
}

void Prompt::setPrompt(string prompt){
	this->prompt = prompt;
}

void Prompt::displayPrompt(){
	cout << prompt << endl;
}
