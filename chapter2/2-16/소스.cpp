#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���.������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ����; �Դϴ�. 10000������ �����մϴ�.\n";
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
	cout << "�� ���ĺ� �� " << alphabet << "\n\n";
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