#include <iostream>
using namespace std;

int main() {
	while (1) {
		char a[100];
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(a, 100, '\n');
		string b = a;
		if (b.compare("yes") == 0) {
			break;
		}
	}
	cout << "종료합니다...";
}