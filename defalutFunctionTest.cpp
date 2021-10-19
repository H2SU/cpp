#include <iostream>

using namespace std;
void sayHello(int n = 1);

int main() {
	cout << "sayHello()-> ";
	sayHello();
	cout << endl;

	cout << "sayHello(3)-> ";
	sayHello(3);
	
	return 0;
}

void sayHello(int n) {
	for (int i = 0; i < n; i++) cout << "Hello ";
}

