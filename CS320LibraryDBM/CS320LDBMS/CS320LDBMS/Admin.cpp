#include"Admin.h"

Admin::Admin() {
	string newId, newPassword;
	cout << "Admin ID: " << endl;
	cin.ignore();
	getline(cin, newId);
	cout << "Admin Password: " << endl;
	getline(cin, newPassword);

	id = newId; password = newPassword;
	signInAsAdmin(id, password);
}

Admin::~Admin() {

}

void Admin::signInAsAdmin(string newId, string newPassword) {

	fstream adminDb;
	string ID, pass;
	adminDb.open("adminCredentials.txt", ios::in);

	while (!adminDb.eof()){
		adminDb >> ID >> pass;
		if (ID == newId && pass == newPassword){
			cout << "Successfully Signed In! " << endl;
			// call the admin menu from adminOption when implemented
			break;
		}
		else if (adminDb.eof() && ID != newId && pass != newPassword) {
			cout << "Invalid Credentials!! " << endl; //TODO consider a better if statement
		}
	}
}