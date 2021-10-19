#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
private:
	string name;
	double score;
public:
	Student(string name, double score) {
		this->name = name;
		this->score = score;
	}

	double get_score() { return score; }

	void print() {
		cout << "이름: " << name << endl;
		cout << "학점: " << score << endl;
	}
};

bool compare(Student& s1, Student& s2) { return s1.get_score() > s2.get_score(); }

int main() {
	vector<Student> information;

	string cin_name;
	double cin_score;

	for (int i = 0; i < 3; i++) {
		cout << "이름을 입력해주세요: ";
		cin >> cin_name;
		cout << "학점을 입력해주세요: ";
		cin >> cin_score;
		cout << endl;

		information.push_back(Student(cin_name, cin_score));
	}

	sort(information.begin(), information.end(), compare);

	cout << "==================" << endl;
	for (auto& i : information) i.print();
	cout << "==================" << endl;

	return 0;
}

