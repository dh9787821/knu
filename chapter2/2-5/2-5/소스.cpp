#include <iostream>
using namespace std;

int main() {
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).";
	char str[100];
	cin.getline(str, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x') {
			count++;
		}
	}
	cout<<"x�� ������ "<< count;
}