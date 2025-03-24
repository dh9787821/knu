#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "두 수를 입력하라>>";
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << "큰수 = " << num1;
	}
	else {
		cout << "큰수 = " << num2;
	}
}