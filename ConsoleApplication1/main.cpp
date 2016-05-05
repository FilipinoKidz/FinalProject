#include "User.h"

int main(){
	Time t;
	Time g;
	Time f;

	t.set_year(2016);
	t.set_month(5);
	t.set_day(4);
	t.set_hour(20);
	t.set_min(51);

	t.print_t();

	g.set_year(1997);
	g.set_month(7);
	g.set_day(12);
	g.set_hour(23);
	g.set_min(50);

	g.print_t();

	f = t - g;

	f.print_t();

	system("pause");

}