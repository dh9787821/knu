#include <iostream>
using namespace std;

int main() {
	while (1) {
		char a[100];
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 100, '\n');
		string b = a;
		if (b.compare("yes") == 0) {
			break;
		}
	}
	cout << "�����մϴ�...";
}