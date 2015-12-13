#include"Student.h"
#include"Admin.h"
#include"SignUp.h"

using namespace std;

void menu();
void checkUsersChoice(int);
void systemInformation();

int main() {

	menu();

	string name, surname, id, email;
	cin >> name >> surname >> id >> email;

	Admin a1 = Admin(name, surname, id,email);
	Student s1 = Student(name, surname, id, email);

	a1.print();
	s1.print();

	return 0;
}

void menu() {
	
	int usersChoice;
	string option;
	cout << "----------------------------------------------------------------" << endl;
	cout << "\t Welcome To Library Database Management System \n\n\n" << endl;

	cout << "Press 1 to Get Information About the LDBMS Program. " << endl;
	cout << "Press 2 to Sign In as an Admin. " << endl;
	cout << "press 3 to Sign In as a Student. " << endl;
	cout << "Press 4 to Exit. " << endl;
	cout << endl << endl;
	
	while (true) {
		cout << "Choose an Option to Continue (From 1-4): ";
		cin >> usersChoice;

		if (usersChoice == 4) {
			cout << "Thanks For Using Our Program! " << endl;
			return;
		}
		checkUsersChoice(usersChoice);
		
		OPTION:cout << endl << "Do You Want To Start Over (Y / N)?";
		cin >> option;;
		if (option == "Y" || option == "y") {
			continue;
		}
		else if (option == "N" || option == "n") {
			cout << "Thanks For Using Our Program! " << endl;
			break;
		}
		else {
			cout << "Invalid Input! " << endl;
			goto OPTION;
		}
	}

	cout << endl << "----------------------------------------------------------------" << endl;
}

void checkUsersChoice(int usersChoice) {
	if (usersChoice < 0 || usersChoice > 3) {
		cout << "Invalid Input!" << endl;
	}
	else {
		switch (usersChoice){
		case 1:  systemInformation();
			break;
		case 2: // Create a class for signing in as admin
			break;
		case 3: SignUp signUpForm;// Create a class for signing in as student
			break;
		}
	}
}

void systemInformation() {
	
	cout << "This is a library management program that helps user ... that is written by..." << endl; // TODO: Write an introduction about the program and what it does.
}