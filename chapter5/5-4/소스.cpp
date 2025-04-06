#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	big = (a > b) ? a : b;
	return (a == b) ? true : false;
}

int main() {
	int num1, num2, big;
	cout << "2개의 정수 입력 ";
	cin >> num1 >> num2;
	bigger(num1, num2, big);
	cout << "큰 수는 " << big;
}
	