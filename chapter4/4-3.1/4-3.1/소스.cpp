#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a') { count++; }
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}