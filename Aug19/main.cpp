#include <iostream>
#include "arraylist.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char op;
	int num, pos;
	List* list = new ArrayList();
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				list->add(num);
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
