#include "Student.h"
#include "fstream";

Student::Student()
{


}

Student::Student(string newName, string newSurname, string newID, string newEmail)
{
	this->name = newName;
	this->surname = newSurname;
	this->ID = newID;
	this->email = newEmail;

}

Student::~Student()
{
}

void Student::studentMenu()
{

	cout << "Welcom to the Student Menu" << endl;
	cout << "1) View all books" << endl;
	cout << "2) Search a book" << endl;
	cout << "3) Borrow a book\n" << endl;

	cout << "You can choose from one of the options available" << endl;
	cout << "Select 1, 2 or 3\n" << endl;

	int choice;

	cout << "Select: ";
	cin >> choice;

	if (choice == 1) {

		viewAllBooks();
	} 
	else if (choice == 2) {
		searchBook();
	}
	else if (choice == 3) {
		borrowBook();
	}


}

void Student::viewAllBooks()
{
	ifstream readBooks;
	readBooks.open("books.txt");

	string bookName;
	int bookCounter = 0;
	int counter = 1;
	
	cout << "\nThe following books are currently in the database\n" << endl;
	
	if (readBooks.is_open()) {
		while (getline(readBooks, bookName)) {
			if (bookName != "") {  //This condition makes sure not to print empty lines , if there are any.
				cout << counter << " ) " << bookName << endl;
				counter++;
				bookCounter++;
			}
		}
		readBooks.close();
		cout << "\nTotal number of books found in the database: " << bookCounter << " books " << endl;
	}  
	 else {
		cout << "Unable to open file";
	}

}