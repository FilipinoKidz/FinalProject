#include "Transaction.h"

class List{
	List *next;
	List *prev;
	Transaction data;
public:
	List();
	List(Transaction);
	List *get_next();
	List *get_prev();
	Transaction get_data();
	void *set_next();
	void *set_prev();
	void set_data();
};