#include "list.hpp"

class ArrayList : public List {
	void print() {
		for (int i = 0; i < 5; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
