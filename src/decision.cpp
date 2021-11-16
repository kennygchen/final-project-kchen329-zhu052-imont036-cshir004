#include "../header/decision.hpp"

Decision::Decision(string prompt){
	setPrompt(prompt);
}

int Decision::decision(string prompt, string prompt2){
	cout << prompt << endl << " Or " << endl << prompt2 << endl << "Enter 1 for first choice or 2 for second choice!" << endl;
	cin >> decision;
	return decision;
}
