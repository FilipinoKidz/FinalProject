#include<string>
#include "List.h"

using namespace std;
class User{
	string fname;
	string lname;
	int age;
	// address
	string username;
	string password;
	string card_num;
	int pin;
	List *list;
public:
	User(string fn, string ln, string un, string pw);
	User new_user();
	string get_fname();
	string get_lname();
	string get_username();
	string get_password();
	int get_pin();
	void set_fname();
	void set_lname();
	void set_username();
	void set_password();
	void set_pin();
	void assign_card_num();
	List *addto(List *);
	List *deletefrom(List *);
	Transaction average(List *);
	Transaction standard_dv(List *);
	bool dev_check(Transaction, List *);
};
