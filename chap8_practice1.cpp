#include <iostream>
using namespace std;

int main() {
	int num;
	int count;
	int* p;

	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? : ";
	cin >> count;

	p = new int[count];

	for (int i = 0; i < count; i++) {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> num;
		p[i] = num;
	}

	cout << "�Էµ� �������� : ";

	for (int i = 0; i < count; i++) cout << p[i] << " ";

	delete[] p;

	return 0;
}


