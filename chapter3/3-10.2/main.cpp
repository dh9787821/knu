#include <iostream>
using namespace std;

#include "class.h"

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