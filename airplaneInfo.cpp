#include <iostream>

using namespace std;

class Airplane {

private:
	string name;
	int capacity;
	int speed;


public:
	Airplane(string name, int capacity, int speed) {
		this->name = name;
		this->capacity = capacity;
		this->speed = speed;
	}
	
	Airplane() {
		this->name = " ";
		this->capacity = 0;
		this->speed = 0;
	}

	void setName(string name) {
		this->name = name;
	}

	void setCapacity(int capacity) {
		this->capacity = capacity;
	}

	void setSpeed(int speed) {
		this->speed = speed;
	}

	string getName() {
		return name;
	}

	int getCapacity() {
		return capacity;
	}

	int getSpeed() {
		return speed;
	}

	void print() {
		cout << "Ç×°ø±â¸í: " << name << endl;
		cout << "½Â°´ ¼ö: " << capacity << "¸í"<< endl;
		cout << "¼Óµµ: " << speed << "km/h"<<endl;
		cout << endl;
	}
};

int main() {
	Airplane plane1("A380", 853, 1000);
	Airplane plane2;

	plane2.setName("Boeing787");
	plane2.setCapacity(360);
	plane2.setSpeed(954);

	plane1.print();

	cout << "Ç×°ø±â¸í: " << plane2.getName() << endl;
	cout << "½Â°´ ¼ö: " << plane2.getCapacity() << "¸í" << endl;
	cout << "¼Óµµ: " << plane2.getSpeed() << "km/h" << endl;
	cout << endl;

	return 0;
}