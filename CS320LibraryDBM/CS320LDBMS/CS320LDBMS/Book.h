#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
#include <fstream>

using namespace std;

class Book {
public:
	Book();
	Book(string, string, string);
	~Book();
	bool BookInformation();
	void BorrowBook();
	void checkAvailability();
	void bookMenu();
	void returnBook();

private:

	string name;
	string ISBN;
	string year;

};
#endif