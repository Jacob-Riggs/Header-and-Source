// Header-and-Source.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h" // Pull in the header file

// This section will pull in the other source files
//#include "getStringFromUser.cpp"
//#include "getIntFromUser.cpp"
//#include "displayInputs.cpp"

int main()
{
	cout << "Welcome to an improved version of the multiple functions Mad Libs game!\n\n";
	cout << "Answer the following prompts to create a story.\n";

	string name = getStringFromUser("Please enter a name: ");
	string job = getStringFromUser("Please enter a job: ");
	int number = getIntFromUser("Please enter a number: ");
	string verb = getStringFromUser("Please enter a verb: ");
	string anotherJob = getStringFromUser("Please enter a strange job: ");

	displayInputs(name, job, number, verb, anotherJob);

	system("pause");
    return 0;
}

