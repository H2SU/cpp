#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int salary;
public:
	Employee(string name = "", int salary = 0) : name(name), salary(salary) {}

	void setName(string name) { this->name = name; };
	void setSalary(int salary) { this->salary = salary; };
	string getName() { return name; }
	int getSalary() { return salary; }
		int calculateSalary() { return salary; }
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;
	}
};

class Manager : public Employee {
private:
	int bonus;
public:
	Manager(string name = "", int salary = 0, int bonus = 0) : Employee(name, salary), bonus(bonus) {}

	void setBonus() { this->bonus = bonus; }
	int getBonus() { return bonus; }
	int calculateSalary() { return getSalary() + bonus; }
	void print() {
		cout << "�̸�: " << getName() << endl;
		cout << "����: " << getSalary() << endl;
		cout << "���ʽ�: " << bonus << endl;
		cout << "�� �޿�:" << calculateSalary() << endl;
	}
};

int main() {
	Manager e{ "ȫ�浿", 300, 50 };
	e.print();

	return 0;
}


