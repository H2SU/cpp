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
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;
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
		cout << "이름: " << getName() << endl;
		cout << "월급: " << getSalary() << endl;
		cout << "보너스: " << bonus << endl;
		cout << "총 급여:" << calculateSalary() << endl;
	}
};

int main() {
	Manager e{ "홍길동", 300, 50 };
	e.print();

	return 0;
}


