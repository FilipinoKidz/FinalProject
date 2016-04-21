#ifndef TRANSACTION
#define TRANSACTION
#include <string>
#include "Time.h"
#include "Location.h"
using namespace std;
class Transaction{
	float amount;
	Location loc;
	Time transtime;
	int category;
public:
	Transaction();
	void set_category(int);
	void set_amount(float);
	float get_amount();
	Location get_loc();
	Time get_time();
};


#endif