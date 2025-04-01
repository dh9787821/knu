#include <iostream>
using namespace std;

int main() {
	int* p = new int[5];
	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}
	cout << "평균 " << (p[0]+ p[1] + p[2] + p[3] + p[4])/5.0;
	delete []p;
}