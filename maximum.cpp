#include <iostream>

using namespace std;
int maximum(int x, int y, int z);



int main() {
	int x, y, z;

	cout << "���� 3���� �Է����ּ���: ";
	cin >> x;
	cin >> y;
	cin >> z;

	cout << "���� ū ������ " << maximum(x, y, z) << endl;

	return 0;
}

int maximum(int x, int y, int z) {

	if (x <= y) {
		if (y <= z) return z;
		else return y;
	}

	else {
		if (x <= z) return z;
		else return x;
	}
}

