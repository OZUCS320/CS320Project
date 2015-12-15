#include "AdminOption.h"

AdminOption::AdminOption() {

}

AdminOption::~AdminOption() {

}

void AdminOption::adminMenu() {

		cout << "\nWelcome to the admin menu" << endl;
		cout << "You can select any option from the following menu : \n" << endl;
		cout << " 1) Add a book" << endl;
		cout << " 2) Search book\n" << endl;
		
		cout << "Enter your choice: ";
		int choice;

		cin >> choice;

		if (choice == 1) {
				
			addBook();

		}
		else if (choice == 2) {
			searchBook();

		}



}

void AdminOption::adminRequestApprove() {
	fstream signUp;
	string name, pass, mail, id;
	int choice;

	signUp.open("signUp.txt", ios::in);
	cout << "You have the following signUp Requests: " << endl << endl;
	cout << "username \t password \t email \t id " << endl;

	while (true) {
		if (!signUp.eof()) {
			signUp >> name >> pass >> mail >> id;
			if (signUp.eof()) break;
			cout << name << "\t" << pass << "\t" << mail << "\t" << id << endl;
		}
		else {
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

void AdminOption::addBook()
{
	ofstream bookname;

	bookname.open("books.txt", ios::app);

	cout << "\nEnter the name of the book you want to enter: ";
	string name;
	int choice;
	cin.ignore();
	getline(cin, name, '\n');


	if (bookname.is_open())
	{
		
			bookname << name << endl;
			bookname.close();
		
		cout << "\nSuccessfully added the book";
		cout << "\nDo you want to add more books?" << endl;
		cout << "1)Yes " << endl;
		cout << "2) No " << endl;
		cout << "Select 1 or 2 from the choices: " ;

		cin >> choice;

		if (choice == 1) {
			addBook();
		}
		else if (choice == 2) {
			return adminMenu();
		}
		else {
			cout << "\nInvalid choice, you will be returned to the main menu" << endl;
			return adminMenu();
		}

		
		bookname.close();

	}
	else cout << "Unable to open file";



}

void AdminOption::searchBook()
{


	ifstream searchBooks;
	searchBooks.open("books.txt");

	string bookName;

	
	string userOption = "";
	cout << "\nEnter the name of the book you want to search: ";
	cin.ignore();  //For flushing the input buffer
	getline(cin, userOption, '\n');



	if (searchBooks.is_open()) {
		while (getline(searchBooks, bookName)) {
			if (bookName == userOption && bookName != " ") {
				cout << "Book Found : " << userOption << endl;
				return;
			}
		}
		searchBooks.close();
		cout << "\nBook Not Found!" << endl;
		cout << "Make sure you are entering the name correctly.";
	}
	else {
		cout << "Unable to open file";
	}

}
