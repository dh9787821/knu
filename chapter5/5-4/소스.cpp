#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	big = (a > b) ? a : b;
	return (a == b) ? true : false;
}

int main() {
	int num1, num2, big;
	cout << "2���� ���� �Է� ";
	cin >> num1 >> num2;
	bigger(num1, num2, big);
	cout << "ū ���� " << big;
}
	