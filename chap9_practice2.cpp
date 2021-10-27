#include <iostream>
using namespace std;

class Line {
public:
	int getLength();
	Line(int len);
	Line(const Line& other);
	~Line();

private:
	int* ptr;
};

Line::Line(int len) {
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "���� ������" << endl;
	ptr = new int;
	*ptr = *other.ptr;
}

Line::~Line() { 
	cout << "�Ҹ��� ����" << endl;
	delete[] ptr; 
}

int Line::getLength(void) { return *ptr; }

int main() {
	Line line1{ 100 };
	Line line2{ line1 };
	Line line3{ line2 };
	cout << "���� ����: " << line1.getLength() << endl;
	Line line4{ line3 };
	cout << "���� ����: " << line4.getLength() << endl;

	return 0;
}

