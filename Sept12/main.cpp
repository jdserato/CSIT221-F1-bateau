#include <iostream>
#include "linkedlist.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	for (int i = 0; i < 10000; i++) {
//		List* list = new ArrayList();
//		cout << i << " " << list << endl;
//		delete (ArrayList*) list;
//	}
	
	char op;
	int num, pos;
	LinkedList* list = new LinkedList();
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'l':
				cin >> num;
				list->add(num);
				break;
			case 'f':
				cin >> num;
				list->addFirst(num);
				break;
			case 'g':
				cin >> pos;
				num = list->get(pos);
				if (num == -1) {
					cout << "Invalid position" << endl;
				} else {
					cout << "Position " << pos << ": " << num << endl;
				}
				break;
			case 'L':
				num = list->removeLast();
				if (num != -1) {
					cout << "Removed " << num << endl;
				} else {
					cout << "Nothing removed" << endl;
				}
				break;
			case 'F':
				num = list->removeFirst();
				if (num != -1) {
					cout << "Removed " << num << endl;
				} else {
					cout << "Nothing removed" << endl;
				}
				break;
			case 'p':
				list->print();
				break;
			case 'x':
				cout << "Exiting...";
				break;
			default:
				cout << "Invalid operation" << endl;
	 	}
	} while (op != 'x');
	return 0;
}
