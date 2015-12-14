#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<string>
#include<fstream>
#include"AdminOption.h"

using namespace std;

class Admin{
public:
	Admin();
	~Admin();

	void signInAsAdmin(string, string);

private:
	string id;
	string password;
};

#endif 