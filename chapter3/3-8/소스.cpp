#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	int number, get(), isEven();
	void set(int n);
	Integer();
	Integer(int n);
	Integer(string s);
};
Integer::Integer() {
	number = 0;
}
Integer::Integer(int n) {
	number = n;
}
Integer::Integer(string s) {
	number = stoi(s);
}
int Integer::get() {
	return number;
}
int Integer::isEven() {
	if (number % 2 == 0) { return 1; }
	else { return 0; }
}
void Integer::set(int n) {
	number = n;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}