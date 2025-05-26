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
	void call() { cout << year << "년도, " << name << ", " << author << endl; }
};

int main() {
	vector<Book> v;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 종료합니다." << endl;
	while (1) {
		int year;
		string name, author;
		cout << "년도>>";
		cin >> year;
		if (year == -1) break;
		cout << "책이름>>";
		cin.ignore();
		getline(cin, name);
		cout << "저자>>";
		getline(cin, author);
		v.push_back(Book(year, name, author));
	}
	cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;
	string author;
	cout << "검색하고자 하는 저자의 이름을 입력하세요>>";
	cin.ignore();
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) if (v[i].searchByAuthor(author)) v[i].call();
	int year;
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) if (v[i].searchByYear(year)) v[i].call();
}