#include <string>
#include <cmath>
#include "Time.h"
using namespace std;
class Transaction{
	double amount;
	double dist_home;
	double dist_last;
	double longitude;
	double latitude;
	Time transtime;
	int category;
public:
	Transaction();
	Transaction(double, double, double, Time);
	void set_category(int);
	void set_amount(double);
	void set_dist_h(double, double);
	void set_dist_l(Transaction);
	void set_long(double);
	void set_lat(double);
	double get_amount();
	double get_dist_h();
	double get_dist_l();
	double get_long();
	double get_lat();
	Time get_time();
};