#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>

using namespace std;

class Book {
public:
	Book();
	Book(string, string, string, string); //name, author (think about what should be done if multiple author), id, year.. (if something more please add)
	~Book();
	
	void setName(string);
	void setAuthor(string);
	void setID(string);
	void setYear(string);
	void setLoan(bool);
	string getName();
	string getAuthor();
	string getISBN();
	string getYear();
	bool getLoan();

private:
	string name;
	string author;
	string isbn;
	string year;
	bool isOnLoan;

};
#endif