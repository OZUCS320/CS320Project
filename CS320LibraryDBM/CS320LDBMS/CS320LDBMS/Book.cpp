#include "Book.h"

Book::Book(string studentsName)
{
	bookMenu(studentsName);
}

Book::~Book()
{

}


void Book::bookMenu(string studentsName) {

	cout << "\t welcome to the book Section: " << endl;
	cout << "For borrowing the book press 1" << endl;
	cout << "For returning the book press 2" << endl;

	int option;
	cout << "Choose an option: " << endl;
	cin >> option;

	if (option == 1) {
		BorrowBook(studentsName);
	}
	else if (option == 2) {
		returnBook(studentsName);
	}
	else {
		cout << "Invalid Input! " << endl;
	}
}

void Book::BorrowBook(string studentsName) {

	string booksName;
	cout << "please enter the book's name to be borrowed: " << endl;
	cin >> booksName;
	bool available = false;
	available = searchForBook(booksName);
	if (available = true) {
		cout << "test passed" << endl;
	}
	else {
		cout << "Test failed " << endl;
	}

	fstream borrowedBooks;
	borrowedBooks.open("borrowedBooks.txt", ios::app | ios::in);
	//need to finish the borrowwing method

}

void Book::returnBook(string studentsName) {
	bool available = false;
	string name;
	cout << "Enter the name of the book to be returned " << endl;
	cin >> name;
	available = true;
	// need to be implemented correctly
}

bool Book::searchForBook(string booksName)
{
	ifstream searchBooks;
	searchBooks.open("books.txt");

	/*std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');*/
	string userOption = "";

	if (searchBooks.is_open()) {
		while (getline(searchBooks, booksName)) {
			if (booksName == userOption && booksName != " ") {
				cout << "Book Found : " << userOption << endl;
				return true;
			}
		}
		searchBooks.close();
		cout << "\nBook Not Found!" << endl;
		cout << "Make sure you are entering the name correctly.";
		return false;
	}
	else {
		cout << "Unable to open file";
		return false;
	}
}

