#include "User.h"
#include <iostream>

User::User(string fn, string ln, string un, string pw){
	fname = fn;
	lname = ln;
	username = un;
	password = pw;
	card_num = "Not yet assigned";
	pin = 0;
}

User User::new_user(){
	string fn;
	string ln;
	string un;
	string pw;
	cout << "First Name: ";
	cin >> fn;
	cout << "Last Name: ";
	cin >> ln;
}