#include <iostream>
using namespace std;

int main() {
	int num = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << num <<"	";
			num++;
		}
		cout << "\n";
	}
}