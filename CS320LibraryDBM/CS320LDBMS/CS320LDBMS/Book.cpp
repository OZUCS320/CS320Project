#include "Book.h"

Book::Book()
{
	this->isOnLoan = false;
}

Book::Book(string name, string author, string id, string year)
{
	this->name = name;
	this->author = author;
	this->id = id;
	this->year = year;
	this->isOnLoan = false;
}

Book::~Book()
{
}

void Book::setName(string name)
{
	this->name = name;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

void Book::setID(string id)
{
	this->id = id;
}

void Book::setYear(string year)
{
	this->year = year;
}

void Book::setLoan(bool a)
{
	this->isOnLoan = a;
}

string Book::getName()
{
	return name;
}

string Book::getAuthor()
{
	return author;
}

string Book::getID()
{
	return id;
}

string Book::getYear()
{
	return year;
}

bool Book::getLoan()
{
	return this->isOnLoan;
}
