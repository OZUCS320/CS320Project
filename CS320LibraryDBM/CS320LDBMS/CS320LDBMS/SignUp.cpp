#include"SignUp.h"

SignUp::SignUp() {
	string newName, newPassword, newEmail, newId;
	cout << "----------------------------------------------------------------" << endl;
	cout << "\t\t\t\t Sign Up Form " << endl << endl;
	
	cout << "Enter Your User Name: " << endl;
	cin >> newName;
	cin.ignore(); // change this!
	cout << "Enter Your Password: " << endl;
	cin >> newPassword;
	cin.ignore(); // change this!
	cout << "Enter Your Email: " << endl;
	cin >> newEmail;
	cin.ignore(); // change this!
	cout << "Enter Your ID: " << endl;
	cin >> newId;
	cin.ignore(); // change this!
	cout << "----------------------------------------------------------------" << endl;

	name = newName; password = newPassword; email = newEmail; id = newId;
	sendToDatabase(name, password, email, id);
}

SignUp::~SignUp() {

}

void SignUp::sendToDatabase(string newName, string newPassword, string newEmail, string newId) {
	ofstream signUpRequests;
	signUpRequests.open("signUp.txt", ios::app);

	signUpRequests << newName << " " << newPassword << " " << newEmail << " " << newId << endl;
}