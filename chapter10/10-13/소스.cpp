#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	map<string, int> dic;
	while (1) {
		int choice;
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> choice;
		if (choice == 1) {
			string name;
			int score;
			cout << "이름과 점수>> ";
			cin >> name >> score;
			dic[name] = score;
		}
		else if (choice == 2) {
			string name;
			cout << "이름>> ";
			cin >> name;
			cout << name << "의 점수는 "<< dic[name] <<endl;
		}
		else if (choice == 3) { cout << "프로그램을 종료합니다..." << endl; break; }
	}
}