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
	void set_next(List *);
	void set_prev(List *);
	void set_data(Transaction);
};