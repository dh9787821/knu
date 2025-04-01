#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	Circle();
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
Circle::Circle() {
	radius = 0;
	name = "";
}
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager();
	CircleManager(int size);
	~CircleManager();
	void setinit(string name, int radius, int seq);
	void searchByName(string name);
	void searchByArea(int area);
};
CircleManager::CircleManager() {
	size = 0;
}
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
}
CircleManager::~CircleManager(){ delete[] p; }
void CircleManager::setinit(string name, int radius, int seq) {
	p[seq].setCircle(name, radius);
}
void CircleManager::searchByName(string name) {
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) { cout << name << "�� ������ " << p[i].getArea() << endl; }
	}
}
void CircleManager::searchByArea(int area) {
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) { cout << p[i].getName() << "�� ������ " << p[i].getArea() << ','; }
	}
}

int main() {
	int n, radius, area;
	string name;
	
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager c(n);
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		c.setinit(name, radius, i);
	}
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	c.searchByName(name);
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	c.searchByArea(area);
}