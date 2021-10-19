#include <iostream>

using namespace std;

int main() {
	char board[3][3];
	int x, y;
	int again = 0;

	do {
		for (x = 0; x < 3; x++) for (y = 0; y < 3; y++) board[x][y] = ' '; // 보드 초기화
		again = 0; // 재시작을 판단하는 변수

		for (int i = 0; i < 9; i++) {
			cout << "(x, y) 좌표: ";
			cin >> x >> y;

			while (x < 0 || x > 2 || y < 0 || y>2) { // 만약 0~2 범위 좌표값을 입력하지 않았다면 오류가 나기 때문에 무조건 0~2사이 좌표값을 입력할 수 있도록 반복문을 통해 구현
				cout << "0~2사이의 좌표값을 입력해주세요: ";
				cin >> x >> y;
			}

			board[x][y] = (i % 2 == 0) ? 'O' : 'X'; // 홀수번째와 짝수번째를 구분하기 위한 코드

			for (int k = 0; k < 3; k++) { // 틱택토 보드 출력
				cout << "---ㅣ---ㅣ---" << endl;
				cout << ' ' << board[k][0] << " ㅣ " << board[k][1] << " ㅣ " << board[k][2] << endl;
			}
			cout << "---ㅣ---ㅣ---" << endl;
		}

		cout << "1: 다시하기 / 2: 종료" << endl; // 다시하기
		cout << "다시 하시겠습니까? ";
		cin >> again;

	} while (again == 1);
	
	return 0;
}

