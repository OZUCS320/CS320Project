#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

using namespace std;

class Student {
public:

	Student();
	Student(string, string, string, string);
	~Student();
	void studentMenu();
	void viewAllBooks();
	void searchBook();

	
private:
	string name;
	string surname;
	string ID;
	string email;
};

#endif