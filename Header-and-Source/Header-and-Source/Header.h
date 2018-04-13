#pragma once


// Include everything needed for the project to include in all files
#include <iostream>;
#include <string>;

using namespace std;

string getStringFromUser(string prompt);
int getIntFromUser(string prompt);
void displayInputs(string name, string job, int number, string verb, string anotherJob);