#include "Time.h"

Time::Time(){
	day = 0;
	month = 0;
	year = 0;
	hour = 0;
	min = 0;
}

Time::Time(int d, int mo, int y, int h, int mi){
	if (day > 31){
		cout << "Invalid day" << endl;
		day = 0;
	}
	else
		day = d;
	if (mo > 12)
	{
		cout << "Invalid Month" << endl;
		month = 0;
	}
	else
		month = mo;
	if (h > 24){
		cout << "Invalid Hour" << endl;
		hour = 0;
	}
	else
		hour = h;
	if (mi >= 60)
	{
		cout << "Invalid Minute" << endl;
		min = 0;
	}
	else
		min = mi;	
	
	year = y;	
}

void Time::set_day(int d){
	if (day > 31){
		cout << "Invalid day" << endl;
		day = 0;
	}
	else
		day = d;
}
void Time::set_month(int m){
	if (m > 12)
	{
		cout << "Invalid Month" << endl;
		month = 0;
	}
	else
		month = m;
}
void Time::set_year(int y){
	year = y;
}
void Time::set_hour(int h){
	if (h > 24){
		cout << "Invalid Hour" << endl;
		hour = 0;
	}
	else
		hour = h;
}
void Time::set_min(int m){
	if (m >= 60)
	{
		cout << "Invalid Minute" << endl;
		min = 0;
	}
	else
		min = m;
}
int Time::get_day(){
	return day;
}
int Time::get_month(){
	return month;
}
int Time::get_year(){
	return year;
}
int Time::get_hour(){
	return hour;
}
int Time::get_min(){
	return min;
}

void Time::print_t(){
	cout << month << "/" << day << "/" << year << " " << hour << ":" << min << endl;
}

Time Time::operator-(Time t){				// This function assumes that the left side is always more recent
	Time tmp;
	if (min >= t.min)
		tmp.min = min - t.min;
	else{
		tmp.min = min + (60 - t.min);
		t.hour++;
	}
	if (hour >= t.hour)
		tmp.hour = hour - t.hour;
	else{
		tmp.hour = hour + (24 - t.hour);
		t.day++;
	}
	if (day >= t.day)
		tmp.day = day - t.day;
	else{
		if (t.month == 2){
			if (((t.year % 4) == 0) && (t.year % 100 != 0))
				tmp.day = day + (29 - t.day);
			else if (((t.year % 100) == 0) && (t.year % 400 == 0))
				tmp.day = day + (29 - t.day);
			else
				tmp.day = day + (28 - t.day);
		}
		else if (t.month == 4 || t.month == 6 || t.month == 9 || t.month == 11)
			tmp.day = day + (30 - t.day);
		else
			tmp.day = day + (31 - t.day);
		t.month++;
	}
	if (month >= t.month)
		tmp.month = month - t.month;
	else{
		tmp.month = month + (12 - t.month);
		t.year++;
	}
	tmp.year = year - t.year;

	return tmp;
}