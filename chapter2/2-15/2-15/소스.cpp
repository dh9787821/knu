#include <iostream>
using namespace std;

int main() {
	while (1) {
		int result;
		char num1[100], num2[100], operator1[1];
		cout << "? ";
		cin >> num1;
		cin >> operator1;
		cin >> num2;
		if (operator1[0] == '+') {
			cout << num1 << " " << operator1 << " " << num2 << " = " << atoi(num1) + atoi(num2) << "\n";
		}
		if (operator1[0] == '-') {
			cout << num1 << " " << operator1 << " " << num2 << " = " << atoi(num1)-atoi(num2) << "\n";
		}
		if (operator1[0] == '*') {
			cout << num1 << " " << operator1 << " " << num2 << " = " << atoi(num1)*atoi(num2) << "\n";
		}
		if (operator1[0] == '/') {
			cout << num1 << " " << operator1 << " " << num2 << " = " << atoi(num1)/atoi(num2) << "\n";
		}
		if (operator1[0] == '%') {
			cout << num1 << " " << operator1 << " " << num2 << " = " << atoi(num1) % atoi(num2) << "\n";
		}
	}
}