#include <iostream>
using namespace std;

int main() {
	cout << "****** �¸��忡 ���Ű��� ȯ���մϴ�. *****\n";
	while (1) {
		int choice, num;
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> choice;
		if (choice == 1) {
			cout << "���κ�?";
			cin >> num;
			cout << "«�� " << num << "�κ� ���Խ��ϴ�\n";
		}
		else if (choice == 2) {
			cout << "���κ�?";
			cin >> num;
			cout << "¥�� " << num << "�κ� ���Խ��ϴ�\n";
		}
		else if (choice == 3) {
			cout << "���κ�?";
			cin >> num;
			cout << "������ " << num << "�κ� ���Խ��ϴ�\n";
		}
		else if (choice == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}

	}
}