#include <iostream>
using namespace std;

int main() {
	string password1, password2;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> password2;
	if (password1.compare(password2)==0) {
		cout << "�����ϴ�";
	}
	else {
		cout << "���� �ʽ��ϴ�";
	}
}