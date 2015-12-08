#include"Admin.h"

Admin::Admin() {
	name = "";
	surname = "";
	ID = "";
	email = "";
}

Admin::Admin(string newName, string newSurname, string newID, string newEmail) {
	setName(newName);
	setSurname(newSurname);
	setID(newID);
	setEmail(newEmail);
}

Admin::~Admin() {

}

void Admin::setName(string newName) {
	name = newName;
}

string Admin::getName() const{
	return name;
}

void Admin::setSurname(string newSurname){
	surname = newSurname;
}

string Admin::getSurname() const{
	return surname;
}

void Admin::setID(string newID) {
	ID = newID;
}

string Admin::getID() const{
	return ID;
}

void Admin::setEmail(string newEmail) {
	email = newEmail;
}

string Admin::getEmail() const{
	return email;
}

void Admin::print() const{
	cout << "Name: " << getName() << " " << getSurname() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Email: " << getEmail() << endl;
}