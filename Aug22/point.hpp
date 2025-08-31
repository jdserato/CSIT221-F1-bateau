struct point {
	int x;
	int y;
	
	point midpoint(point x) {
		point mid;
		mid.x = (this->x + x.x) / 2;
		mid.y = (this->y + x.y) / 2;
		return mid;
	}
};

typedef point Point;
