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
	Movie movie2("기생충", "봉준호", 8.6);

	movie1.setTitle("어벤져스");
	movie1.setDirector("조스 휘던");
	movie1.setRating(8.0);

	cout << "영화명: " << movie1.getTitle() << endl;
	cout << "감독명: " << movie1.getDirector() << endl;
	cout << "평점: " << movie1.getRating() << "점" << endl;
	cout << endl;

	cout << "영화명: " << movie2.getTitle() << endl;
	cout << "감독명: " << movie2.getDirector() << endl;
	cout << "평점: " << movie2.getRating() << "점" << endl;
	cout << endl;

	return 0;
}
