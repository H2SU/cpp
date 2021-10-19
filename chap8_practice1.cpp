#include <iostream>
using namespace std;

int main() {
	int num;
	int count;
	int* p;

	cout << "몇 개의 정수를 입력하시겠습니까? : ";
	cin >> count;

	p = new int[count];

	for (int i = 0; i < count; i++) {
		cout << "정수를 입력하시오: ";
		cin >> num;
		p[i] = num;
	}

	cout << "입력된 정수들은 : ";

	for (int i = 0; i < count; i++) cout << p[i] << " ";

	delete[] p;

	return 0;
}


