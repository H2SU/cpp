#include <iostream>

using namespace std;
int main()
{
	int a, b, c, biggest;
	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		biggest = a;
	else if (b > a && b > c)
		biggest = b;
	else
		biggest = c;

	cout << "���� ū ������" << biggest << endl;
	return 0;
}