// 201632007 �����

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
		cout << "�̸�: " << name << endl;
		cout << "RAM: " << ram << "GB" << endl;
		cout << "CPU�ӵ�: " << cpu_clock << "Ghz" << endl;
	}


};

int main() {
	Com computer;
	computer.setComputer("���ǽ� ��ǻ��", 8, 4.2);
	computer.print();

	return 0;
}