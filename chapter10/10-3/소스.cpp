#include <iostream>
using namespace std;

template <class T>
void reverseArray(T x[], int n) {
	T* tmp;
	tmp = new T[n];
	for (int i = 0; i < n; i++) tmp[i] = x[i];
	for (int i = 0; i < n; i++) x[i] = tmp[n - i - 1];
	delete[] tmp;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}