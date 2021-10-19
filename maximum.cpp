#include <iostream>

using namespace std;
int maximum(int x, int y, int z);



int main() {
	int x, y, z;

	cout << "정수 3개를 입력해주세요: ";
	cin >> x;
	cin >> y;
	cin >> z;

	cout << "가장 큰 정수는 " << maximum(x, y, z) << endl;

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

