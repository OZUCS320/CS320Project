#include "AdminOption.h"

AdminOption::AdminOption()
{
}

AdminOption::~AdminOption()
{
}

void AdminOption::addStudent()
{
	string name, surname, ID, email;
	ofstream Student;

	cout << "Enter student's name: " << endl;
	getline(cin, name);

	cout << "Enter student's surname: " << endl;
	getline(cin, surname);

	cout << "Enter student's ID: " << endl;
	getline(cin, ID);

	cout << "Enter students's email: " << endl;
	getline(cin, email);

	Student.open("student.txt", ios::app);

	if (Student.is_open()) {
		Student << name << "$" << surname << "$" << ID << "$" << email << endl;
	}
	else {
		cout << "Can't axess database!! " << endl;
	}
	Student.close();
}

void AdminOption::addBook(){
	string bookName, author, ISBN, year;
	ofstream Book;
	
	cout << "Enter books's name: " << endl;
	getline(cin, bookName);
	
	cout << "Enter books's author: " << endl;
	getline(cin, author);
	
	cout << "Enter books's ISBN: " << endl;
	getline(cin, ISBN);
	
	cout << "Enter books's year: " << endl;
	getline(cin, year);
	
	Book.open("book.txt", ios::app);
	
	if(Book.is_open()){
	Book << bookName << "$" << author << "$" << ISBN << "$" << year << endl;	
	}
	else {
		cout << "Can't axess database!! " << endl;
	}

	
	Book.close();
	
}

void AdminOption::deleteStudent(Student a)
{
	// delete student from database (I don't know how to deal with database. So this will be your part)
}

void AdminOption::deleteBook(Book b)
{
	//same here
}

void AdminOption::loanSetter(Book c)
{
	bool input;
	cin >> input;
	c.setLoan(input);
}

void AdminOption::changeBookInfo(Book book)
{
	int a;
	string oldname = book.getName();
	string olauthor = book.getAuthor();
	string oldid = book.getISBN();
	string oldyear = book.getYear();
	cout << "What wrong information would you like to change in the book named: " << book.getName() << endl;
	cout << "press 1 for name" << endl;
	cout << "press 2 for author" << endl;
	cout << "press 3 for id" << endl;
	cout << "press 4 for year" << endl;
	cin >>a;
	cout << endl;
	cout << endl;
	if (a == 1) {
		cout << "New name: " << endl;
		string newname;
		cin >> newname;
		book.setName(newname);
		cout << "New name for the book named " << oldname << " is set to be " << newname;
	}
	else if (a == 2) {
		cout << "New author: " << endl;
		string newauthor;
		cin >> newauthor;
		book.setAuthor(newauthor);
		cout << "New author for the book named " << book.getName() << " is set to be " << newauthor;
	}
	else if (a == 3) {
		cout << "New id: " << endl;
		string newid;
		cin >> newid;
		book.setID(newid);
		cout << "New author for the book named " << book.getName() << " is set to be " << newid;
	}
	else if (a == 4 ){
		cout << "New year: " << endl;
		string newyear;
		cin >> newyear;
		book.setYear(newyear);
		cout << "New author for the book named " << book.getName() << " is set to be " << newyear;
	}
	else {
		cout << "Wrong input noob!" << ends;
		changeBookInfo(book);
	}
}

void AdminOption::changeStudentInfo(Student student)
{
	int a;
	string oldname = student.getName();
	string oldsurname = student.getSurname();
	string oldid = student.getID();
	string oldemail = student.getEmail();
	cout << "What wrong information would you like to change in the student named: " << student.getName() << endl;
	cout << "press 1 for name" << endl;
	cout << "press 2 for surname" << endl;
	cout << "press 3 for ID" << endl;
	cout << "press 4 for email" << endl;
	cin >> a;
	cout << endl;
	cout << endl;
	if (a == 1) {
		cout << "New name: " << endl;
		string newname;
		cin >> newname;
		student.setName(newname);
		cout << "New name for the student named " << oldname << " is set to be " << newname;
	}
	else if (a == 2) {
		cout << "New surname: " << endl;
		string newsurname;
		cin >> newsurname;
		student.setSurname(newsurname);
		cout << "New surname for the student named " << student.getName() << " is set to be " << newsurname;
	}
	else if (a == 3) {
		cout << "New id: " << endl;
		string newid;
		cin >> newid;
		student.setID(newid);
		cout << "New id for the student named " << student.getName() << " is set to be " << newid;
	}
	else if (a == 4) {
		cout << "New emai: " << endl;
		string newemail;
		cin >> newemail;
		student.setEmail(newemail);
		cout << "New email for the student named " << student.getName() << " is set to be " << newemail;
	}
	else {
		cout << "Wrong input noob!" << ends;
		changeStudentInfo(student);
	}
}