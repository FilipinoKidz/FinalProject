#include <iostream>

using namespace std;

class Time{
	int day;
	int month;	
	int year;
	int hour;
	int min;
public:
	Time();
	Time(int, int, int, int, int);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	void set_hour(int);
	void set_min(int);
	int get_day();
	int get_month();
	int get_year();
	int get_hour();
	int get_min();
	void print_t();
	Time operator-(Time);
};
