#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****" << endl;
	map<string, int> dic;
	while (1) {
		int choice;
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> choice;
		if (choice == 1) {
			string name;
			int score;
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			dic[name] = score;
		}
		else if (choice == 2) {
			string name;
			cout << "�̸�>> ";
			cin >> name;
			cout << name << "�� ������ "<< dic[name] <<endl;
		}
		else if (choice == 3) { cout << "���α׷��� �����մϴ�..." << endl; break; }
	}
}