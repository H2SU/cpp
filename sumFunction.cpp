// 201632007 �����

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

	cout << "ù ��° ����: ";
	cin >> num1;
	cout << "�� ��° ����: ";
	cin >> num2;

	sum.init(num1, num2);

	cout << "���� ���: " << sum.add();

	return 0;
}

