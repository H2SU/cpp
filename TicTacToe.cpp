#include <iostream>

using namespace std;

int main() {
	char board[3][3];
	int x, y;
	int again = 0;

	do {
		for (x = 0; x < 3; x++) for (y = 0; y < 3; y++) board[x][y] = ' '; // ���� �ʱ�ȭ
		again = 0; // ������� �Ǵ��ϴ� ����

		for (int i = 0; i < 9; i++) {
			cout << "(x, y) ��ǥ: ";
			cin >> x >> y;

			while (x < 0 || x > 2 || y < 0 || y>2) { // ���� 0~2 ���� ��ǥ���� �Է����� �ʾҴٸ� ������ ���� ������ ������ 0~2���� ��ǥ���� �Է��� �� �ֵ��� �ݺ����� ���� ����
				cout << "0~2������ ��ǥ���� �Է����ּ���: ";
				cin >> x >> y;
			}

			board[x][y] = (i % 2 == 0) ? 'O' : 'X'; // Ȧ����°�� ¦����°�� �����ϱ� ���� �ڵ�

			for (int k = 0; k < 3; k++) { // ƽ���� ���� ���
				cout << "---��---��---" << endl;
				cout << ' ' << board[k][0] << " �� " << board[k][1] << " �� " << board[k][2] << endl;
			}
			cout << "---��---��---" << endl;
		}

		cout << "1: �ٽ��ϱ� / 2: ����" << endl; // �ٽ��ϱ�
		cout << "�ٽ� �Ͻðڽ��ϱ�? ";
		cin >> again;

	} while (again == 1);
	
	return 0;
}

