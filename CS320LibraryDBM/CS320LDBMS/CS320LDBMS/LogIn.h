#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class LogIn {
public:

	LogIn();
	~LogIn();

	void LogInSetter(string, string);

private:
	string id;
	string password;
};

#endif