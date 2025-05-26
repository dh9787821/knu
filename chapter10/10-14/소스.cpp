#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** 암호관리 프로그램 HWO를 시작합니다 *****" << endl;
	map<string, string> dic;
	while (1) {
		int choice;
		cout << "삽입:1, 검사:2, 종료:3 >> ";
		cin >> choice;
		if (choice == 1) {
			string name, password;
			cout << "이름 암호>> ";
			cin >> name >> password;
			dic[name] = password;
		}
		else if (choice == 2) {
			string name, password;
			cout << "이름? ";
			cin >> name;
			while (1) {
				cout << "암호? ";
				cin >> password;
				if (dic[name] == password) { cout << "통과!!" << endl; break; }
				else cout << "실패~~" << endl;
			}
			
		}
		else if (choice == 3) { cout << "프로그램을 종료합니다..." << endl; break; }
	}
}