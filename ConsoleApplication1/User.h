#include<string>
#include "List.h"

using namespace std;
class User{
	string fname;
	string lname;
	string username;
	string password;
	string card_num;
	List *list;
public:
	User();
	void set_fname();
	void set_lname();
	void set_username();
	void set_password();
	void assign_card_num();
	List *addto(List *);
	List *deletefrom(List *);
	double average(List *);
	double standard_dv(List *);
	bool dev_check(Transaction, List *);
};
