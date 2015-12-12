#include <iostream>
#include <string>
#include <fstream>

#include "Admin.h"
#include "Book.h"
#include "Student.h"

#ifndef ADMINOPTION_H
#define ADMINOPTION_H

using namespace std;

class AdminOption {
public:
	AdminOption();
	~AdminOption();
	
	void addBook();
	void deleteStudent(Student);
	void deleteBook(Book);
	void loanSetter(Book);
	void changeBookInfo(Book);
	void changeStudentInfo(Student);
	


private:



};
#endif