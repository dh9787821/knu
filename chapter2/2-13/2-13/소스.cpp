#include <iostream>
using namespace std;

int main() {
	cout << "****** 승리장에 오신것을 환영합니다. *****\n";
	while (1) {
		int choice, num;
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> choice;
		if (choice == 1) {
			cout << "몇인분?";
			cin >> num;
			cout << "짬뽕 " << num << "인분 나왔습니다\n";
		}
		else if (choice == 2) {
			cout << "몇인분?";
			cin >> num;
			cout << "짜장 " << num << "인분 나왔습니다\n";
		}
		else if (choice == 3) {
			cout << "몇인분?";
			cin >> num;
			cout << "군만두 " << num << "인분 나왔습니다\n";
		}
		else if (choice == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else {
			cout << "다시 주문하세요!!\n";
		}

	}
}