#include "Book.h"

Book::Book()
{
}

Book::Book(string name, string ISBN, string year) {
	this->name = name;
	this->ISBN = ISBN;
	this->year = year;

}
Book::~Book()
{
}


void Book::bookMenu() {


	cout << "welcome to the book Section" << endl;
	cout << "For Book information press 1" << endl;
	cout << "For borrowing the book press 2" << endl;
	cout << "For returning the book press 3" << endl;


	int option;
	cout << "Choose an option" << endl;
	cin >> option;

	if (option == 1) {
		BookInformation();
	}
	else
		if (option == 2) {
			BorrowBook();
		}
		else
			if (option == 3) {
				returnBook();
			}
}
bool Book::BookInformation() {
	string name;
	string ISBN;
	string year;


	cout << "Please enter the Book Information" << endl;
	cout << "Please enter the book name: " << endl;
	cin >> name;
	cout << "please enter the book ISBN : " << endl;
	cin >> ISBN;
	cout << "please Enter the book year: " << endl;
	cin >> year;

	checkAvailability();

	return false;





}
void Book::BorrowBook() {

	bool available = true;
	string name;
	cout << "please enter the Required informaton: " << endl;
	cout << "Enter the Book Name: " << endl;
	cin >> name;


}

void Book::returnBook() {

}

void Book::checkAvailability() {

}

