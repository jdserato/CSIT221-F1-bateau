#include "list.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class ArrayList : public List {
	int* array;
	int size;
	int cap;
	
	public:
	// constructor
	ArrayList() {
		cap = 5;
		array = new int[cap];
		size = 0;
	}
	// destructor
	~ArrayList() {
//		cout << "Calling destructor" << endl;
		delete array;
	}
	
	void add(int num) {
		if (size >= cap) { // Already full
			cap = ceil(cap * 1.5);
			cout << "Before: " << array << endl;
			array = (int*) realloc(array , cap * sizeof(int));
			cout << "After: " << array << endl;
		} 
		array[size++] = num;
	}
	void print() {
		cout << "Size: " << size << "/" << cap << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
