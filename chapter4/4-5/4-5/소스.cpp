#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
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