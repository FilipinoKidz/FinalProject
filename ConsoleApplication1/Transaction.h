#ifndef TRANSACTION
#define TRANSACTION
#include <string>
using namespace std;
class Transaction{
	float amount;
	string loc;
	Time transtime;

};

class Time{
	int month;
	int day;
	int year;
	int hour;
	int min;
};


#endif