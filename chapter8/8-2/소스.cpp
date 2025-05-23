#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") { setRadius(radius); this->name = name; }
	void setCircle(int radius = 0, string name = "") { setRadius(radius); this->name = name; }
	string getName() { return name; }
};

int main() {
	NamedCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		int radius;
		string name;
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setCircle(radius, name);
	}
	int max = 0;
	for (int i = 0; i < 5; i++) if (pizza[max].getArea() < pizza[i].getArea()) max = i;
	cout << "가장 면적이 큰 피자는 "<< pizza[max].getName() <<"입니다" << endl;
}