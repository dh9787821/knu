#include <iostream>
using namespace std;

int main() {
	string password1, password2;
	cout << "새 암호를 입력하세요>>";
	cin >> password1;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> password2;
	if (password1.compare(password2)==0) {
		cout << "같습니다";
	}
	else {
		cout << "같지 않습니다";
	}
}