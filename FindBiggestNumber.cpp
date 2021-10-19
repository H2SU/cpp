#include <iostream>

using namespace std;
int main()
{
	int a, b, c, biggest;
	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		biggest = a;
	else if (b > a && b > c)
		biggest = b;
	else
		biggest = c;

	cout << "가장 큰 정수는" << biggest << endl;
	return 0;
}