#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
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