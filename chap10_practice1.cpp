#include <iostream>
using namespace std;

int num = 1;

class Box {
private:
	double length;
	double width;
	double height;

public:
	Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}
	
	double getVolume(void) { return length * width * height; }

	Box operator+(const Box& b2);
	bool operator==(const Box& b2);
	bool operator!=(const Box& b2);
	bool operator<(const Box& b2);

	friend void printBox(Box box);
};

Box Box::operator+(const Box& b2) {
	Box v;
	v.length = this->length + b2.length;
	v.width = this->width + b2.width;
	v.height = this->height + b2.height;
	return v;
}

bool Box::operator==(const Box& b2) { return (length == b2.length && width == b2.width && height == b2.height); }
bool Box::operator!=(const Box& b2) { return !(*this == b2); }
bool Box::operator<(const Box& b2) { return this->getVolume(); }

void printBox(Box box) {
	cout << "상자 #" << num << endl;
	cout << "상자의 길이: " << box.length << endl;
	cout << "상자의 너비: " << box.width << endl;
	cout << "상자의 높이: " << box.height << endl;
	cout << "상자의 부피: " << box.getVolume() << endl;
	cout << endl;
	num++;
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20), c;

	c = a + b;
	printBox(a);
	printBox(b);
	printBox(c);
	
	cout << "a == b: " << (a == b) << endl;
	cout << "a != b: " << (a != b) << endl;
	cout << "a < b: " << (a < b) << endl;

	return 0;

}

