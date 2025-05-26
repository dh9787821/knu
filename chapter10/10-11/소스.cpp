#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	int year;
	string name, author;
public:
	Book(int year = 0, string name = "", string author = "") { this->year = year; this->name = name; this->author = author; }
	bool searchByAuthor(string author){
		if (this->author == author) return true;
		else return false;
	}
	bool searchByYear(int year) {
		if (this->year == year) return true;
		else return false;
	}
	void call() { cout << year << "�⵵, " << name << ", " << author << endl; }
};

int main() {
	vector<Book> v;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �����մϴ�." << endl;
	while (1) {
		int year;
		string name, author;
		cout << "�⵵>>";
		cin >> year;
		if (year == -1) break;
		cout << "å�̸�>>";
		cin.ignore();
		getline(cin, name);
		cout << "����>>";
		getline(cin, author);
		v.push_back(Book(year, name, author));
	}
	cout << "�� �԰�� å�� " << v.size() << "�� �Դϴ�." << endl;
	string author;
	cout << "�˻��ϰ��� �ϴ� ������ �̸��� �Է��ϼ���>>";
	cin.ignore();
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) if (v[i].searchByAuthor(author)) v[i].call();
	int year;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) if (v[i].searchByYear(year)) v[i].call();
}