#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요.히스토그램을 그립니다.\n텍스트의 끝은; 입니다. 10000개까지 가능합니다.\n";
	char str[10001];
	cin.getline(str, 1001, ';');
	for (int i = 0; i < strlen(str); i++) {
		if (int(str[i]) > 'A' and int(str[i] < 'Z')) {
			str[i] = char(int(str[i])+32);
		}
	}
	int alphabet = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' and str[i] <= 'z') {
			alphabet++;
		}
	}
	cout << "총 알파벳 수 " << alphabet << "\n\n";
	for (int i = 97; i <= 122; i++) {
		int count = 0;
		for (int j = 0; j <= strlen(str); j++) {
			if (str[j] == i) {
				count++;
			}
		}
		cout << char(i) << " (" << count << ")		: ";
		for (int i = 0; i < count; i++) {
			cout << "*";
		}
		cout << "\n";
	}
}