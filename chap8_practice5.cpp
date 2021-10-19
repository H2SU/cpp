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

	m->p[0].setName("김철수");
	m->p[1].setName("이영희");
	m->p[2].setName("홍길동");

	cout << "학급 " << m->className << "의 학생들은 다음과 같다." << endl;

	for (int i = 0; i < 3; i++) cout << "학생 #" << i << ": " << m->p[i].getName() << endl;

	delete[] m;

	return 0;
}

