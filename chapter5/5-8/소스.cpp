#include <iostream>
using  namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int n);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack() { 
	size = 0;
	p = new int[size];
	tos = -1; 
}
MyIntStack::MyIntStack(int n) {
	size = n;
	p = new int[size];
	tos = -1;
}
MyIntStack::~MyIntStack() { delete[] p; }
MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	this->tos = s.tos;
	p = new int[size];
	for (int i = 0; i <= tos; i++) { p[i] = s.p[i];	}
	
}
bool MyIntStack::push(int n) {
	if (tos < size - 1) {
		tos++;
		p[tos] = n;
		return true;
	}
	else return false;
}
bool MyIntStack::pop(int& n) {
	if (tos >= 0) {
		n = p[tos];
		tos--;
		return true;
	}
	else return false;
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}