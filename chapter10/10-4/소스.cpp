#include <iostream>
using namespace std;

template <class T>
bool search(T x, T arr[], int n) {
	for (int i = 1; i < n; i++) if (arr[i] == x) return true;
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�";
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�";
}