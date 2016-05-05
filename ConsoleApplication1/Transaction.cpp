#include "Transaction.h"

Transaction::Transaction(){
	amount = 0;
	longitude = 0;
	latitude = 0;
	transtime;
	dist_home = 0;
	dist_last = 0;
	category = 0;
}
Transaction::Transaction(double a, double lon, double lat, Time t){
	amount = a;
	longitude = lon;
	latitude = lat;
	transtime = t;
	dist_home = 0;
	dist_last = 0;
	category = 0;
}
void Transaction::set_category(int c){
	category = c;
}
void Transaction::set_amount(double am){
	amount = am;
}
void Transaction::set_dist_h(double h_long, double h_lat){
	dist_home = sqrt(pow(longitude - h_long, 2) + pow(latitude - h_lat, 2));
}

void Transaction::set_dist_l(Transaction l_tran){
	dist_last = sqrt(pow(longitude - l_tran.get_long(), 2) + pow(latitude - l_tran.get_lat(), 2));
}
void Transaction::set_long(double l){
	longitude = l;
}
void Transaction::set_lat(double l){
	latitude = l;
}
double Transaction::get_amount(){
	return amount;
}
double Transaction::get_dist_h(){
	return dist_home;
}
double Transaction::get_dist_l(){
	return dist_last;
}
double Transaction::get_long(){
	return longitude;
}
double Transaction::get_lat(){
	return latitude;
}
Time Transaction::get_time(){
	return transtime;
}