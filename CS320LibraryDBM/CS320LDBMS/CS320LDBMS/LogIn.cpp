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

void LogIn::LogInSetter(string newId, string newPassword) {
	fstream students;
	string name, password, email, id;
	students.open("students.txt", ios::in);

	while (!students.eof()) {
		students >> name >> password >> email >> id;
		if (newId == id && newPassword == password){
			cout << "Successfully Signed In As a Student! " << endl;
			// call the student menu when it is implemented
		}
		else if (students.eof() && newId == id && newPassword == password){
			cout << "Invalid Credentials!! " << endl; // TODO consider a better implementation
		}
	}
}