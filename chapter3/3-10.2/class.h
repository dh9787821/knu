#pragma once
#include <iostream>
using namespace std;

class Add {
public:
	int a, b, calculate();
	void setValue(int x, int y);

};
class Sub {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};
class Mul {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};
class Div {
public:
	int a, b, calculate();
	void setValue(int x, int y);
};