#include "stdafx.h"
#include "Header.h"

int getIntFromUser(string prompt) { // Will be used to get integers from user
	int num;
	cout << prompt;
	cin >> num;
	return num;
}