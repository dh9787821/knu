#include <iostream>
using namespace std;

int main() {
	float num1, num2, num3, num4, num5, max;
	cout << "5 개의 실수를 입력하라>>";
	cin >> num1>> num2>> num3>> num4>> num5;
	max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 > max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}
	cout << "제일 큰 수 = " << max;
}