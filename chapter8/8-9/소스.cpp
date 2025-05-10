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
	cout << "07��:1, 12��:2, 17��:3>> ";
	cin >> choice;
	if (choice == 1) { 
		cout << "07��:"; schedule[0].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[0].change(number-1, name);
	}
	else if (choice == 2) {
		cout << "12��:"; schedule[1].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[1].change(number-1, name);
	}
	else if (choice == 3) {
		cout << "17��:"; schedule[2].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[2].change(number-1, name);
	}
}
void AirlineBook::cancel() {
	int choice, number;;
	string name;
	cout << "07��:1, 12��:2, 17��:3>> ";
	cin >> choice;
	if (choice == 1) {
		cout << "07��:"; schedule[0].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[0].change(number-1, "---");
	}
	else if (choice == 2) {
		cout << "12��:"; schedule[1].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[1].change(number-1, "---");
	}
	else if (choice == 3) {
		cout << "17��:"; schedule[2].show();
		cout << "�¼���ȣ>> "; cin >> number;
		cout << "�̸� �Է�>> "; cin >> name;
		schedule[2].change(number-1, "---");
	}
}

class Console {
	AirlineBook a;
public:
	void book() { a.book(); }
	void cancel() { a.cancel(); }
	void view();
	void finish() { cout << "���� �ý����� �����մϴ�." << endl; }
};
void Console::view() {
	cout << "07��:"; a.show(0); cout << endl;
	cout << "12��:"; a.show(1); cout << endl;
	cout << "17��:"; a.show(2); cout << endl;
}

int main() {
	Console c;
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****" << endl;
	while (1) {
		int choice;
		cout << endl << "����:1, ���:2, ����:3, ������:4>> ";
		cin >> choice;
		if (choice == 1) { c.book(); }
		else if (choice == 2) { c.cancel(); }
		else if (choice == 3) { c.view(); }
		else if (choice == 4) { c.finish(); break; }
	}
}