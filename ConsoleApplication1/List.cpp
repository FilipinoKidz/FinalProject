#include "List.h"

List::List(){
	next = NULL;
	prev = NULL;
	data;
}
List::List(Transaction t){
	next = NULL;
	prev = NULL;
	data = t;
}
List *List::get_next(){
	return next;
}
List *List::get_prev(){
	return prev;
}
Transaction List::get_data(){
	return data;
}
void List::set_next(List *n){
	next = n;
}
void List::set_prev(List *p){
	prev = p;
}
void List::set_data(Transaction t){
	data = t;
}