#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;
	cout << "문자열 입력>>";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a') { count++; }
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}