#include "stdafx.h"
#include "Header.h"

void displayInputs(string name, string job, int number, string verb, string anotherJob) { // Will display the inputs
	cout << "\nHere's your story:\n";
	cout << "There was a person named ";
	cout << name;
	cout << " and they worked as a ";
	cout << job;
	cout << ".\n";
	cout << "After ";
	cout << number;
	cout << " years, they finally said I'm ";
	cout << verb;
	cout << "ing, and quit to become a ";
	cout << anotherJob;
	cout << ".\n\n";
}
