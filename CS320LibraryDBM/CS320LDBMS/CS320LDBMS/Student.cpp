#include"Student.h"

Student::Student() {
	name = "";
	surname = "";
	ID = "";
	email = "";
}

Student::Student(string newName, string newSurname, string newID, string newEmail) {
	setName(newName);
	setSurname(newSurname);
	setID(newID);
	setEmail(newEmail);
}

Student::~Student() {

}

void Student::setName(string newName) {
	name = newName;
}

string Student::getName() const{
	return name;
}

void Student::setSurname(string newSurname) {
	surname = newSurname;
}

string Student::getSurname() const {
	return surname;
}

void Student::setID(string newID) {
	ID = newID;
}

string Student::getID() const{
	return ID;
}

void Student::setEmail(string newEmail) {
	email = newEmail;
}

string Student::getEmail() const{
	return email;
}

void Student::print() const{
	cout << "Name: " << getName() << " " << getSurname() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Email: " << getEmail() << endl;
}