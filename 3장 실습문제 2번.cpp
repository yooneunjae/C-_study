#include <iostream>
#include <string>

using namespace std;

class date {
	int day;
	int month;
	int year;
public:
	date(int x, int y, int z);
	date(string s);
	void show();
	int getyear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

date::date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

date::date(string s) {
	int in1 = s.find("/");
	string y = s.substr(0, in1);

	int in2 = s.find("/", in1 + 1);
	string m = s.substr(in1 + 1, in2 - in1 - 1);
	string d = s.substr(in2 + 1);

	year = stoi(y);
	month = stoi(m);
	day = stoi(d);
}

void date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
	date birth(2014, 3, 20);
	date independenceday("1945/8/15");
	independenceday.show();
	cout << birth.getyear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}