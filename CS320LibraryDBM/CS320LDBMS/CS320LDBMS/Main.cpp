#include"Student.h"
#include"Admin.h"
#include"SignUp.h"
#include"LogIn.h"
#include"AdminOption.h"
#include"Book.h"

using namespace std;

void menu();
void checkUsersChoice(int);
void systemInformation();

int main() {

	menu();

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
		case 2: {cout << "\t\t Welcome To Admin Panel " << endl;
			Admin admin;
			break; }
		case 3: cout << "1. Sign In As a Student. " << endl;
				cout << "2. Sign Up As a New Student. " << endl;
				int choice;
				cin >> choice;

				if (choice == 1) {
					LogIn logInForm;
				}
				else if (choice == 2) {
					SignUp signUpForm;
				}
				else{
					cout << "Wrong Input! " << endl;
				}

			break;
		default: cout << "Wrong Input! " << endl;
		}
	}
}

void systemInformation() {

	cout << "LDBMS is a library management system that helps users to"
		"borrow, return or search for books in the school's available "
		"database, this program was written by five contributers from "
		"ozyegin university (ozyegin.edu.tr), the progeam can " 
		"downloaded from github (https://github.com/OZUCS320/CS320Project). "<< endl;
}