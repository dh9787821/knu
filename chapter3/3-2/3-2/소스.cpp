#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year, month, day, getYear(), getMonth(), getDay();
	void show();
	Date();
	Date(int y, int m, int d);
	Date(string s);
};
Date::Date(){
	year = 0;
	month = 0;
	day = 0;
}
Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string s) {
	year = stoi(s.substr(0, 4));
	s = s.substr(s.find('/')+1);
	if (s[1] == '/') {
		month = stoi(s.substr(0, 1));
	}
	else {
		month = stoi(s.substr(0, 2));
	}
	s = s.substr(s.find('/')+1);
	day = stoi(s);
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}