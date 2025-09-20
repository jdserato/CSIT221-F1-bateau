#include "list.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;

class LinkedList : public List {
	int size;
	node *head, *tail;
	public:
	LinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}
	void add(int num) { // addLast
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		tail = n;
		size++;
	}
	void print() {
		node* curr = head;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl;
		
	}
};
