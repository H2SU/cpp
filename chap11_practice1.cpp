#include <iostream>
using namespace std;

class Point {
protected:
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

class ThreeDPoint : public Point {
private:
	int z;
public:
	ThreeDPoint(int x = 0, int y = 0, int z = 0) : Point(x, y), z(z) {}
	
	void print() { cout << "(" << x << "," << y << "," << z << ")" << endl; }

	ThreeDPoint operator+(const ThreeDPoint& p2);
};

ThreeDPoint ThreeDPoint::operator+(const ThreeDPoint& p2) {
	ThreeDPoint p;

	p.x = this->x + p2.x;
	p.y = this->y + p2.y;
	p.z = this->z + p2.z;

	return p;
}

int main() {
	ThreeDPoint p(10, 10, 10);
	
	p.print();

	ThreeDPoint p1(10, 10, 10);
	ThreeDPoint p2(20, 20, 20);
	ThreeDPoint p3;
	p3 = p1 + p2;
	p3.print();

	return 0;
}

