// 201632007 김희수

#include <iostream>
using namespace std;

class SUM {
public:
	int num1, num2;

	void init(int x, int y) {
		this->num1 = x;
		this->num2 = y;
	}

	int add() {
		return num1 + num2;
	}
};

int main() {
	SUM sum;
	int num1, num2;

	cout << "첫 번째 정수: ";
	cin >> num1;
	cout << "두 번째 정수: ";
	cin >> num2;

	sum.init(num1, num2);

	cout << "연산 결과: " << sum.add();

	return 0;
}

