#include"SignUp.h"

SignUp::SignUp() {
	string newName, newPassword, newEmail, newId;
	cout << "----------------------------------------------------------------" << endl;
	cout << "\t\t\t\t Sign Up Form " << endl << endl;
	
	cout << "Enter Your User Name: " << endl;
	cin.ignore();
	getline(cin, newName);
	cout << "Enter Your Password: " << endl;
	getline(cin, newPassword);
	cout << "Enter Your Email: " << endl;
	getline(cin, newEmail);
	cout << "Enter Your ID: " << endl;
	getline(cin, newId);
	cout << "----------------------------------------------------------------" << endl;

	name = removeSpaces(newName); password = removeSpaces(newPassword); email = removeSpaces(newEmail); id = removeSpaces(newId);
	sendToDatabase(name, password, email, id);
}

SignUp::~SignUp() {

}

void SignUp::sendToDatabase(string newName, string newPassword, string newEmail, string newId) {
	ofstream signUpRequests;
	signUpRequests.open("signUp.txt", ios::app);

	signUpRequests << newName << " " << newPassword << " " << newEmail << " " << newId << endl;
}

string SignUp::removeSpaces(string input){

	input.erase(remove_if(input.begin(), input.end(), isspace), input.end());
	return input;
}