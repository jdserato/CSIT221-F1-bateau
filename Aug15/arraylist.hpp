#include "list.hpp"
#include <iostream>
using namespace std;

// ArrayList is a subclass of List
class ArrayList : public List {
	public:
	int size = 0;
	int array[5];
	
	void add(int num) {
		if (size == 5) {
			cout << "Cant add anymore" <<endl;
			return;
		}
		cout << "Adding " << num << endl;
		array[size++] = num;
	}
	
	void print() {
		for (int i = 0; i < size; i++) {
			cout << "Array[" << i << "]: " << array[i] << endl;
		}
	}
	
	int get(int pos) {
		return array[pos-1];
	}
};
