#include <iostream>
using namespace std;

class Add {
public:
	int a, b, calculate();
	void setValue(int x, int y);
	
};
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b;
}
class Sub {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}
class Mul {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}
class Div {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	while (1) {
		int num1, num2;
		char c;
		Add a;
		Sub s;
		Mul m;
		Div d;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> num1 >> num2 >> c;
		if (c == '+') {
			a.a = num1;
			a.b = num2;
			cout << a.calculate() << endl;
		}
		else if (c == '-') {
			s.a = num1;
			s.b = num2;
			cout << s.calculate() << endl;
		}
		else if (c == '*') {
			m.a = num1;
			m.b = num2;
			cout << m.calculate() << endl;
		}
		else if (c == '/') {
			d.a = num1;
			d.b = num2;
			cout << d.calculate() << endl;
		}
	}
	
}