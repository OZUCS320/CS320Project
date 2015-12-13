#ifndef SIGNUP_H
#define SIGNUP_H

#include<fstream>
#include<iostream>
#include<string>

using namespace std;

class SignUp{
public:
	SignUp();
	~SignUp();

	void sendToDatabase(string, string, string, string);
	
private:
	string name;
	string password;
	string email;
	string id;
};

#endif