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
		if (p[i].getName() == name) { cout << name << "의 면적은 " << p[i].getArea() << endl; }
	}
}
void CircleManager::searchByArea(int area) {
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) { cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ','; }
	}
}

int main() {
	int n, radius, area;
	string name;
	
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager c(n);
	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		c.setinit(name, radius, i);
	}
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	c.searchByName(name);
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	c.searchByArea(area);
}