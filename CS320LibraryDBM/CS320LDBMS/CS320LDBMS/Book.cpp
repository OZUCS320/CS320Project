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
	cin.ignore();
	getline(cin, booksName);
	bool available = false;
	available = searchForBook(booksName);
	if (available == true) {
		fstream borrowedBooks;
		borrowedBooks.open("borrowedBooks.txt", ios::app | ios::in);

		borrowedBooks << studentsName << " Borrowed: " <<booksName << endl;
		cout << "Book Borrowed Successfully by: " << studentsName << endl;
	}
	else {
		cout << "Book Is Not Available in Our Library" << endl;
	}
}

void Book::returnBook(string studentsName) {
	bool available = false;
	string booksName;
	cout << "Enter the name of the book to be returned " << endl;
	cin.ignore();
	getline(cin, booksName);

	fstream returnBooks;
	returnBooks.open("borrowedBooks.txt", ios::in | ios::app);
	
	string name, status, bName;
	returnBooks >> name >> status >> bName; // fix the white space error

	if (booksName == bName) {
		//delete the book
	}
	else{
		cout << "No book that matches the input in library. " << endl;
	}
}

bool Book::searchForBook(string booksName)
{
	ifstream searchBooks;
	searchBooks.open("books.txt");
	string bookFromLibrary;

	if (searchBooks.is_open()) {
		while (!searchBooks.eof()) {
			getline(searchBooks, bookFromLibrary);
			//bookFromLibrary.push_back('\n');
			//cout << bookFromLibrary;
			if (booksName.compare(bookFromLibrary) == 0) {
				cout << "Book Found : " << bookFromLibrary << endl;
				searchBooks.close();
				return true;
				break;
			}
		}
		searchBooks.close();
		return false;
	}
	else {
		cout << "Unable to open file";
		return false;
	}
	return false;
}

