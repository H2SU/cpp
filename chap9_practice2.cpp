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
	cout << "일반 생성자" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "복사 생성자" << endl;
	ptr = new int;
	*ptr = *other.ptr;
}

Line::~Line() { 
	cout << "소멸자 실행" << endl;
	delete[] ptr; 
}

int Line::getLength(void) { return *ptr; }

int main() {
	Line line1{ 100 };
	Line line2{ line1 };
	Line line3{ line2 };
	cout << "선의 길이: " << line1.getLength() << endl;
	Line line4{ line3 };
	cout << "선의 길이: " << line4.getLength() << endl;

	return 0;
}

