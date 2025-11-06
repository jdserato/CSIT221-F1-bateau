#include <iostream>
#include "mygentree.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	GenTree* tree = new MyGenTree();
	try { 
		node* thirteen = tree->addRoot(13);
		node* seven = tree->addRoot(7);
		tree->addChild(thirteen, 20);
		tree->addChild(thirteen, 10);
		tree->addChild(thirteen, 16);
	} catch(exception& e) {
		cout << e.what() << endl;
	} 
	return 0;
}
