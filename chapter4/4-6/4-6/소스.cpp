#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		string str, new_str = "";
		cout << ">>";
		getline(cin, str);
		if (str == "exit") break;
		for (int i = str.length()-1; i << str.length() >= 0; i--) {
			new_str += str[i];
		}
		cout << new_str << endl;
	}
}