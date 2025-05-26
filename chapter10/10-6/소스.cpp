#include <iostream>
#include <string>
using namespace  std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	retSize = sizeSrc;
	int* tmp = new int[sizeSrc]();
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) { retSize--; tmp[i] = 1; }
		}
	}
	T* result = new T[retSize];
	int count = 0;
	for (int i = 0; i < sizeSrc; i++) {
		if (tmp[i] ==0) result[count++] = src[i];
	}
	return result;
}

int main() {
	int a[5] = { 1, 2, 3, 4, 5 }, b[3] = { 5, 76, 0 };
	string c[3] = { "apple", "Jump To Python", "using namespace" }, d[2] = { "KNU", "Visual Studio" };
	int size_ab, size_cd;
	int* ab = remove(a, 5, b, 3, size_ab);
	string* cd = remove(c, 3, d, 2, size_cd);

	for (int i = 0; i < size_ab; i++) cout << ab[i] << ' ';
	cout << endl;
	for (int i = 0; i < size_cd; i++)cout << cd[i] << ' ';
	cout << endl;
}