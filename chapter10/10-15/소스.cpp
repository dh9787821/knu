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
	Manage() { cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl; }
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
		cout << "����:1, ����:2, ��κ���:3, ����:4  >> ";
		cin >> choice;
		if (choice == 1) { 
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			cin >> radius >> name;
			m.input(radius, name);
		}
		else if (choice == 2) {
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
			cin >> name;
			m.del(name);
		}
		else if (choice == 3) { m.view(); }
		else if (choice == 4) break;
	}
}