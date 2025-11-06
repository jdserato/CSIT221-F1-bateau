#include "gentree.hpp"
#include <stdexcept>
class MyGenTree : public GenTree {
	int size;
	node* root;
	
	public:
	MyGenTree() {
		size = 0;
		root = nullptr;
	}
	
	node* addRoot(int num) {
		if (root) {
			throw logic_error("Already has root");
		}
		root = new node;
		root->elem = num;
		root->parent = nullptr;
		root->children = new node*[10];
		root->num_child = 0;
		size++;
		return root;
	}
	node* addChild(node*, int) {
	}
	int remove(node*) {
	}
	int getSize() {
		return size;
	}
	node* getRoot() {
		return root;
	}
};
