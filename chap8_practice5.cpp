#include <iostream>
using namespace std;

class Student {
	string name;
public:
	Student(string name = "") : name(name) {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Myclass {
public:
	string className;
	Student* p;

	Myclass(string name = "") : className(name) {}

	void setStudent() { p = new Student[3]; }
};

int main() {
	Myclass* m = new Myclass;

	m->setStudent();
	m->className = "special";

	m->p[0].setName("��ö��");
	m->p[1].setName("�̿���");
	m->p[2].setName("ȫ�浿");

	cout << "�б� " << m->className << "�� �л����� ������ ����." << endl;

	for (int i = 0; i < 3; i++) cout << "�л� #" << i << ": " << m->p[i].getName() << endl;

	delete[] m;

	return 0;
}

