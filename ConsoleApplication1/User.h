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
	List *list_tail;
	double amount_avg;
	double loc_avg;
	double amount_sd;
	double loc_sd;
public:
	User(string fn, string ln, string un, string pw);
	User new_user();
	string get_fname();
	string get_lname();
	string get_username();
	string get_password();
	int get_pin();
	List *get_list();
	List *get_list_t();
	double get_a_avg();
	double get_a_sd();
	double get_l_avg();
	double get_l_sd();
	void set_fname();
	void set_lname();
	void set_username();
	void set_password();
	void set_pin();
	void assign_card_num();
	void *addto();
	void *deletefrom();
	void find_a_avg();
	void find_a_sd();
	void find_loc_avg();
	void find_loc_sd();
	bool dev_check(Transaction);
};
