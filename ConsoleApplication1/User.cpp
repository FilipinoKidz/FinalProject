#include "User.h"


void User::find_a_avg(){
	List *tmp;
	double sum = 0;
	int ind = 0;
	for (tmp = list; tmp != NULL; tmp = tmp->get_next()){
		sum += tmp->get_data().get_amount();
		ind++;
	}
	amount_avg = sum/ind;
}

void User::find_a_sd(){
	List *tmp;
	double sum = 0;
	int ind = 0;
	for (tmp = list; tmp != NULL; tmp = tmp->get_next()){
		sum += pow(tmp->get_data().get_amount() - amount_avg, 2);
		ind++;
	}
	amount_sd = sum / ind;
}

void User::find_loc_avg(){
	List *tmp;
	double sum = 0;
	int ind = 0;
	for (tmp = list; tmp != NULL; tmp = tmp->get_next()){
		sum += tmp->get_data().get_dist_h();
		ind++;
	}
	loc_avg = sum / ind;
}

void User::find_loc_sd(){
	List *tmp;
	double sum = 0;
	int ind = 0;
	for (tmp = list; tmp != NULL; tmp = tmp->get_next()){
		sum += pow(tmp->get_data().get_dist_h() - loc_avg, 2);
		ind++;
	}
	loc_sd = sum / ind;
}

bool User::dev_check(Transaction t){
	double a_dev = amount_avg - t.get_amount();
	double d_h_dev = loc_avg - t.get_dist_h();
	double est_time_hour;
	Time t_last;
	t_last = list->get_data().get_time() - t.get_time();
	if (t.get_dist_l() < 750)
		est_time_hour = t.get_dist_l() / 55;		// Assuming that, if the distance from last transaction is less than 750 mi., then the person drove
	else
		est_time_hour = t.get_dist_l() / 550;		//Assuming that, if the distance from last transaction is more than 750 mi., then the person flew
	double est_time_min = est_time_hour * 60;
	double est_time_day = est_time_hour / 24;
	if (a_dev > amount_sd){
		if ((a_dev - amount_sd) / amount_sd > .3)\
			return false;
	}
	if (d_h_dev > loc_sd){
		if ((d_h_dev - loc_sd) / loc_sd > .3)
			return false;
	}
	if (t.get_time().get_month() == list->get_data().get_time().get_month()){
		if ((t_last.get_day() < est_time_day))
			return false;
		else if (t_last.get_hour() < est_time_hour)
			return false;
		else if (t_last.get_min() < est_time_min)
			return false;
	}
	return true;
}