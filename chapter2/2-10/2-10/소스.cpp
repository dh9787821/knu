#include <iostream>
using namespace std;

int main() {
	cout << "���ڿ� �Է�>>";
	char a[100];
	cin >> a;
	for (int i = 1; i < strlen(a)+1; i++) {
		for (int j = 0; j < i; j++) {
			cout << a[j];
		}
		cout << "\n";
	}
}