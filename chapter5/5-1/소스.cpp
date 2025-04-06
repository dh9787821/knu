#include <iostream>
using namespace std;

class Circle {
	int n;
public:
	Circle();
	Circle(int n);
	void print();
};
Circle::Circle() { n = 0; }
Circle::Circle(int n) {
	this->n = n;
}
void Circle::print() {
	cout << n << endl;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	Circle a(1), b(2);
	swap(a, b);
	a.print();
	b.print();
}