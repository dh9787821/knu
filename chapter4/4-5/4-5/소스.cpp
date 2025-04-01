#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		string str;
		int index;
		cout << ">>";
		getline(cin, str);
		if (str == "exit") break;
		while (1) {
			index = rand() % (str.length() + 1);
			if (str[index] != ' ') {
				str[index] = char(rand() % (122 - 97 + 1) + 97);
				break;
			}
		}
		cout << str << endl;
	}
}