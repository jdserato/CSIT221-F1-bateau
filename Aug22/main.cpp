#include <iostream>
#include "triangle.hpp"
#include "samp.hpp"
using namespace std;

void printTriangle(Triangle* t) {
	t->p1->x = 8;
	cout << t->p1->x << endl;
}

int main(int argc, char** argv) {
	cout << "Size of " << sizeof(Samp) << endl;
	Point p2 = {5,4};
	Point* p1 = new point;
	p1->x = -1;
	p1->y = -2;
	Point p3 = {6,7};
	Triangle tri = {p1, &p2, &p3};
	printTriangle(&tri);
	cout << "Print p1 " << p1->x << endl; 
	cout << "Print tri " << tri.p1->x << endl; 
//	int* mid = midpoint(x1, y1, x2, y2);
	Point mid = p1->midpoint(p2);
	Point oneh = Point{100,200};
	Point mid1 = oneh.midpoint(Point{300,400});
	cout << "Midpoint is (" << mid.x << "," << mid.y << ")";
	return 0;
}
