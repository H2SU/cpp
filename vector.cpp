#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> num;
	int count_num;
	int cin_num;
	int max_num = 0;
	int min_num = 214783647;

	cout << "������ ����: ";
	cin >> count_num;

	do {
		cout << "������ �Է����ּ���: ";
		cin >> cin_num;
		num.push_back(cin_num);
		count_num--;
	} while (count_num > 0);

	for (int& x : num) {
		if (x > max_num) max_num = x;
		else if (x < min_num) min_num = x;
	}

	cout << "�ִ밪: " << max_num << endl;
	cout << "�ּҰ�: " << min_num << endl;

	return 0;
}

