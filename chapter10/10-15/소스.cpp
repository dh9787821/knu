#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) { this->radius = radius; this->name = name; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class Manage {
	vector<Circle> c;
public:
	Manage() { cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl; }
	void input(int radius, string name) { c.push_back(Circle(radius, name)); }
	void del(string name) { 
		vector<Circle>::iterator it;
		it = c.begin();
		while (it != c.end()) {
			if (it->getName() == name) it = c.erase(it);
			else it++;
		}
	}
	void view() { for (int i = 0; i < c.size(); i++) { cout << c[i].getName() << endl; }cout << endl; }
};

int main() {
	Manage m;
	while (1) {
		int choice, radius;
		string name;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4  >> ";
		cin >> choice;
		if (choice == 1) { 
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			cin >> radius >> name;
			m.input(radius, name);
		}
		else if (choice == 2) {
			cout << "삭제하고자 하는 원의 이름은 >> ";
			cin >> name;
			m.del(name);
		}
		else if (choice == 3) { m.view(); }
		else if (choice == 4) break;
	}
}