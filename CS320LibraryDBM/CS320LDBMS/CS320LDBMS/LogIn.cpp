#include "LogIn.h"

LogIn::LogIn()
{
	cout << "Please enter your id: " << ends;
	cin >> id;
	cout << endl;
	
	cout << "Please enter your password: " << ends;
	cin >> password;
	cout << endl;

	LogInSetter(id, password);
}

LogIn::~LogIn()
{
}

void LogIn::LogInSetter(string id, string password)
{
	ifstream students;
	string line;
	int success = 0;
	students.open("signUp.txt", ios::in);

	while (getline(students, line)) {
		string id;
		string password;
		while () {
			int num = 0;
			if ()
		}

		if ( line.find(id) ) {
			if (line.find(password)) {
				success = 1;
			}
}
	}

	if (success == 1) {
		cout << "You have been successful" << endl;
	}
	else {
		cout << "This information is wrong!" << endl;

	}
}


