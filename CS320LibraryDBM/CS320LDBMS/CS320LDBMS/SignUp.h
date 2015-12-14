#ifndef SIGNUP_H
#define SIGNUP_H

#include<fstream>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class SignUp{
public:
	SignUp();
	~SignUp();

	void sendToDatabase(string, string, string, string);
	string removeSpaces(string);

private:
	string name;
	string password;
	string email;
	string id;
};

#endif