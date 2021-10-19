// 201632007 김희수

#include <iostream>
using namespace std;

class Com {
public:
	string name;
	int ram;
	double cpu_clock;

	void setComputer(string name, int ram, double cpu_clock) {
		this->name = name;
		this->ram = ram;
		this->cpu_clock = cpu_clock;
	}

	void print() {
		cout << "이름: " << name << endl;
		cout << "RAM: " << ram << "GB" << endl;
		cout << "CPU속도: " << cpu_clock << "Ghz" << endl;
	}


};

int main() {
	Com computer;
	computer.setComputer("오피스 컴퓨터", 8, 4.2);
	computer.print();

	return 0;
}