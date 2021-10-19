#include <iostream>
using namespace std;

class Movie {
private:
	string title;
	string director;
	float rating;

public:
	Movie() {
		title = " ";
		director = " ";
		rating = 0;
	}

	Movie(string title, string director, float rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}

	void setTitle(string title) {
		this->title = title;
	}

	void setDirector(string director) {
		this->director = director;
	}

	void setRating(float rating) {
		this->rating = rating;
	}

	string getTitle() {
		return title;
	}

	string getDirector() {
		return director;
	}

	float getRating(){
		return rating;
	}
};

int main() {
	Movie movie1;
	Movie movie2("�����", "����ȣ", 8.6);

	movie1.setTitle("�����");
	movie1.setDirector("���� �ִ�");
	movie1.setRating(8.0);

	cout << "��ȭ��: " << movie1.getTitle() << endl;
	cout << "������: " << movie1.getDirector() << endl;
	cout << "����: " << movie1.getRating() << "��" << endl;
	cout << endl;

	cout << "��ȭ��: " << movie2.getTitle() << endl;
	cout << "������: " << movie2.getDirector() << endl;
	cout << "����: " << movie2.getRating() << "��" << endl;
	cout << endl;

	return 0;
}
