#include "LogIn.h"

LogIn::LogIn()
{
	cout << "Please enter your id: " << ends;
	cin >> id;
	cin.ignore();
	cout << endl;
	
	cout << "Please enter your password: " << ends;
	cin >> password;
	cin.ignore();
	cout << endl;

	LogInSetter(id, password);
}

LogIn::~LogIn(){

}

void LogIn::LogInSetter(string id, string password) {
	// logIn Credential Checker, WILL BE IMPLEMENTED BY HUSSAM
}


