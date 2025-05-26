#include <iostream>
#include <string>
using namespace  std;

template <class T>
T* contact(T a[], int sizea, T b[], int sizeb) {
	T* arr = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) arr[i] = a[i];
	for (int i = sizea; i < sizea + sizeb; i++) arr[i] = b[i - sizea];
	return arr;
}

int main() {
	int a[5] = { 1, 2, 3, 4, 5 }, b[3] = { 5, 76, 0 };
	string c[3] = { "apple", "Jump To Python", "using namespace" }, d[2] = { "KNU", "Visual Studio" };
	int* ab= contact(a, 5, b, 3);
	string* cd = contact(c, 3, d, 2);

	for (int i = 0; i < 8; i++) cout << ab[i] << ' ';
	cout << endl;
	for (int i = 0; i < 5; i++)cout << cd[i] << ' ';
	cout << endl;
}