#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** ��ȣ���� ���α׷� HWO�� �����մϴ� *****" << endl;
	map<string, string> dic;
	while (1) {
		int choice;
		cout << "����:1, �˻�:2, ����:3 >> ";
		cin >> choice;
		if (choice == 1) {
			string name, password;
			cout << "�̸� ��ȣ>> ";
			cin >> name >> password;
			dic[name] = password;
		}
		else if (choice == 2) {
			string name, password;
			cout << "�̸�? ";
			cin >> name;
			while (1) {
				cout << "��ȣ? ";
				cin >> password;
				if (dic[name] == password) { cout << "���!!" << endl; break; }
				else cout << "����~~" << endl;
			}
			
		}
		else if (choice == 3) { cout << "���α׷��� �����մϴ�..." << endl; break; }
	}
}