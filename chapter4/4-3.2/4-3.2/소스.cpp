#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0, index = -1;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.find('a', index+1) == -1) break;
		count++;
		index = str.find('a', index+1);
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}