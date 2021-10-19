#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> num;
	int count_num;
	int cin_num;
	int max_num = 0;
	int min_num = 214783647;

	cout << "정수의 개수: ";
	cin >> count_num;

	do {
		cout << "정수를 입력해주세요: ";
		cin >> cin_num;
		num.push_back(cin_num);
		count_num--;
	} while (count_num > 0);

	for (int& x : num) {
		if (x > max_num) max_num = x;
		else if (x < min_num) min_num = x;
	}

	cout << "최대값: " << max_num << endl;
	cout << "최소값: " << min_num << endl;

	return 0;
}

