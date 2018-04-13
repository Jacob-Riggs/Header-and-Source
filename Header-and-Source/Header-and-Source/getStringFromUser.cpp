#include "stdafx.h"
#include "Header.h"

string getStringFromUser(string prompt) { // Will get string inputs from user
	string text;
	cout << prompt;
	cin >> text;
	return text;
}