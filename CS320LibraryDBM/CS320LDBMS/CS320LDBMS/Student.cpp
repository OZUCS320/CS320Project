#include "Student.h"
#include <fstream>

Student::Student()
{


}

Student::Student(string newName, string newID)
{
	this->name = newName;
	this->ID = newID;
}

Student::~Student()
{
}

void Student::studentMenu()
{

	cout << "\nWelcome to the Student Menu" << endl;
	cout << "1) View all books" << endl;
	cout << "2) Search a book" << endl;
	cout << "3) Borrow or Return a book\n" << endl;

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
		Book book(name);
	}

	else {
		cout << "\nWrong choice made!" << endl;
		cout << "Please select again.\n";
		studentMenu();
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

void Student::searchBook()
{
	
	

	ifstream searchBooks;
	searchBooks.open("books.txt");

	string bookName;
	
	/*std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');*/
	string userOption = "";
	cout << "\nEnter the name of the book you want to search: ";
	cin.ignore();  //For flushing the input buffer
	getline(cin, userOption, '\n');

	

	if (searchBooks.is_open()) {
		while (getline(searchBooks, bookName)) {
			if (bookName == userOption && bookName != " " ) {  	
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


