#include <iostream>
#include "arraylist.hpp"
using namespace std;

int main() {
	List* list = new ArrayList();
	ArrayList* alist = (ArrayList*) list;
	alist->size = 6;
	list->add(4);
	list->add(8);
	list->add(9);
	list->add(14);
	list->add(18);
	list->add(25);
	list->add(25);
	list->add(25);
	list->print();
	cout << "Third: " << list->get(3) << endl;
	cout << "DONE";
	return 0;
}
