#include "list.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;
class LinkedList : public List {
//	public:
	int size;
	node head, tail;
	private:
	int removeNode(node* n) {
		n->prev->next = n->next;
		n->next->prev = n->prev;
		int res = n->elem;
		free(n);
		size--;
		return res;
	}
	node* addBetween(int num, node* pred, node* succ) {
		node* n = new node;
		n->elem = num;
		n->next = succ;
		n->prev = pred;
		pred->next = n;
		succ->prev = n;
		size++;
		return n;
	}
	public:
	LinkedList() {
		head.next = &tail;
		tail.prev = &head;
		size = 0;
	}
	~LinkedList() {
		cout << "DESTRUCT" << endl;
//		while (head) {
//			node* tmp = head->next;
//			delete head;
//			head = tmp;
//		}	
	}
	void add(int num) { // add last
		addBetween(num, tail.prev, &tail);
	}
	void addFirst(int num) {
		addBetween(num, &head, head.next);
	}
	int removeFirst() {
		return size == 0 ? -1 : removeNode(head.next);
	}
	int removeLast() {
		return size == 0 ? -1 : removeNode(tail.prev);
	}
	int get(int pos) {
//		node* curr;
//		int ctr;
//		if (pos > size || pos < 1) {
//			return -1;
//		}
//		if (pos <= size/2) {
//			cout << "FROM HEAD" <<  endl;
//			curr = head;
//			ctr = 1;
//			while (ctr < pos) {
//				curr = curr->next;
//				ctr++;
//			}
//			return curr->elem;
//		} else {
//			cout << "FROM TAIL" <<  endl;
//			curr = tail;
//			ctr = size;
//			while (ctr > pos) {
//				curr = curr->prev;
//				ctr--;
//			}
//			return curr->elem;
//		}
	}
	void print() {
		cout <<"Size: " << size << endl;
		cout <<"From HEAD: " << endl;
		node* curr = head.next;
		while (curr != &tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl;
		cout <<"From TAIL: " << endl;
		curr = tail.prev;
		while (curr != &head) {
			cout << curr->elem << " -> ";
			curr = curr->prev;
		}
		cout << endl;
	}
};
