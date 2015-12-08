#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<string>

using namespace std;

class Admin{
public:
	Admin();
	Admin(string, string, string, string);
	~Admin();

	void setName(string);
	string getName() const;

	void setSurname(string);
	string getSurname() const;

	void setID(string);
	string getID() const;

	void setEmail(string);
	string getEmail() const;

	void print() const;

private:
	string name;
	string surname;
	string ID;
	string email;
};

#endif 