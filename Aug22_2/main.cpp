#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int* array = new int[1];
	array = (int*) realloc(array, 500000 * sizeof(int));
//	for (int i = 0; i < 50000; i++) {
//		array[i] = i*10;
//	}
	for (int i = 0; i < 500000; i++) {
		cout << array[i] << " ";
	}
//	realloc(array, 10);
	cout << "Complete";
	return 0;
}
