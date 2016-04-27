#include<string>
#include "Transaction.h"
using namespace std;
class User{
	string fname;
	string lname;
	string username;
	string password;
	string card_num;
	Transaction *list;
public:
	User();
	void set_fname();
	void set_lname();
	void set_username();
	void set_password();
	void assign_card_num();
	Transaction *addto(Transaction *);
	Transaction *deletefrom(Transaction *);
	double average(Transaction *);
	double standard_dv(Transaction *);
	bool dev_check(Transaction, Transaction *)
};
