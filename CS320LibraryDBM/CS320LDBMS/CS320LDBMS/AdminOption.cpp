#include "AdminOption.h"

AdminOption::AdminOption(){

}

AdminOption::~AdminOption(){

}

void AdminOption::adminMenu() {

	// in this function you will create an admin newmu which is like, addBook, SearchBook.

}

void AdminOption::adminRequestApprove() {
	fstream signUp;
	string name, pass, mail, id;
	int choice;
	
	signUp.open("signUp.txt", ios::in);
		cout << "You have the following signUp Requests: " << endl << endl;
		cout << "username \t password \t email \t id " << endl;
		
		while (true){
			if (!signUp.eof()){
				signUp >> name >> pass >> mail >> id;
				if (signUp.eof()) break;
				cout << name << "\t" << pass << "\t" << mail << "\t" << id << endl;
			}
			else{
				signUp.close();
				break;
			}
		}
		signUp.close();

	START:cout << "Do you approve the following requests?(1 for yes and 0 for no) " << endl;
		cin >> choice;
		if (choice == 1) {
			fstream students;
			students.open("students.txt", ios::app);
			signUp.open("signUp.txt", ios::in);
			while (!signUp.eof()) {
				signUp >> name >> pass >> mail >> id;
				if (signUp.eof()) break;
				students << name << " " << pass << " " << mail << " " << id << endl;
			}
			cout << "Successfully transfered all students to the database! " << endl;
			students.close();
			signUp.close();

			signUp.open("signUp.txt", ios::out | ios::trunc);
			signUp.close();
		}
		else if (choice == 0) {
			signUp.open("signUp.txt", ios::out | ios::trunc);
			signUp.close();
			cout << "Requests were all declined. " << endl;
		}
		else {
			cout << "Invalid Argument! " << endl;
			goto START;
		}
}