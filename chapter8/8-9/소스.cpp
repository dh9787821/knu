#include <iostream>
#include <string>
using namespace std;

class Seat {
	string name = "---";
public:
	void change(string name) { this->name = name; }
	string show() { return name; }
};

class Schedule {
	Seat* seat;
public:
	Schedule() { seat = new Seat[8]; }
	~Schedule() { delete[] seat; }
	void change(int index, string name) { seat[index].change(name); }
	void show() { for (int i = 0; i < 8; i++) { cout << "	" << seat[i].show(); } cout << endl; }
};

class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook() { schedule = new Schedule[3]; }
	~AirlineBook() { delete[] schedule; }
	void book();
	void cancel();
	void show(int i) { schedule[i].show(); }
};
void AirlineBook::book() {
	int choice, number;;
	string name;
	cout << "07시:1, 12시:2, 17시:3>> ";
	cin >> choice;
	if (choice == 1) { 
		cout << "07시:"; schedule[0].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[0].change(number-1, name);
	}
	else if (choice == 2) {
		cout << "12시:"; schedule[1].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[1].change(number-1, name);
	}
	else if (choice == 3) {
		cout << "17시:"; schedule[2].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[2].change(number-1, name);
	}
}
void AirlineBook::cancel() {
	int choice, number;;
	string name;
	cout << "07시:1, 12시:2, 17시:3>> ";
	cin >> choice;
	if (choice == 1) {
		cout << "07시:"; schedule[0].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[0].change(number-1, "---");
	}
	else if (choice == 2) {
		cout << "12시:"; schedule[1].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[1].change(number-1, "---");
	}
	else if (choice == 3) {
		cout << "17시:"; schedule[2].show();
		cout << "좌석번호>> "; cin >> number;
		cout << "이름 입력>> "; cin >> name;
		schedule[2].change(number-1, "---");
	}
}

class Console {
	AirlineBook a;
public:
	void book() { a.book(); }
	void cancel() { a.cancel(); }
	void view();
	void finish() { cout << "예약 시스템을 종료합니다." << endl; }
};
void Console::view() {
	cout << "07시:"; a.show(0); cout << endl;
	cout << "12시:"; a.show(1); cout << endl;
	cout << "17시:"; a.show(2); cout << endl;
}

int main() {
	Console c;
	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;
	while (1) {
		int choice;
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> choice;
		if (choice == 1) { c.book(); }
		else if (choice == 2) { c.cancel(); }
		else if (choice == 3) { c.view(); }
		else if (choice == 4) { c.finish(); break; }
	}
}