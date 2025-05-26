#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T x[], T y[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) if (x[i]!=y[i]) count++;
	if (count == 0) return true;
	else return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(x, y, 5)) cout << "����" << endl;
	else cout << "�ٸ���" << endl;

	char c[] = { 'a', 'g', 'o', 'q' };
	char d[] = { 'a', 'l', 'o', 'q' };
	if (equalArrays(c, d, 4)) cout << "����" << endl;
	else cout << "�ٸ���" << endl;
}