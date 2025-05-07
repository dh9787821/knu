#include <iostream>
using namespace std;

class Stack {
	int n = 0;
	int* arr = new int[n];
public:
	Stack& operator<<(int x);
	bool operator!();
	Stack operator>>(int& x);
};
Stack& Stack::operator<<(int x) {
	n++;
	arr[n - 1] = x;
	return *this;
}
bool Stack::operator!() {
	if (n == 0) return true;
	else return false;
}
Stack Stack::operator>>(int& x) {
	x = arr[n - 1];
	n--;
	return *this;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}