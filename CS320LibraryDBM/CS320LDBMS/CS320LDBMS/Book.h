#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
#include <fstream>
#include"Student.h"

using namespace std;

class Book {
public:
	Book(string);
	~Book();
	void BorrowBook(string);
	void bookMenu(string);
	void returnBook(string);

	bool searchForBook(string);

private:
	
};
#endif