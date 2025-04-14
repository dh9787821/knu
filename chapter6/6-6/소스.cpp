#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* contact(int s1[], int s2[], int size);

	static int* remove(int s1[], int s2[], int size, int& retSize);
};
int* ArrayUtility2::contact(int s1[], int s2[], int size) {
	int* a = new int[size * 2];
	for (int i = 0; i < size; i++) a[i] = s1[i];
	for (int i = 0; i < size; i++) a[size+i] = s2[i];
	return a;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* a = new int[5];
	int getsize = 0;
	for (int i = 0; i < size; i++) {
		int check = 0;
		for (int j = 0; j < 5; j++) {
			if (s1[i] == s2[j]) check++;
		}
		if (check == 0) {
			*(a+getsize) = s1[i];
			getsize++;
		}
	}
	retSize = getsize;
	return a;
}

int main() {
	int x[5], y[5], size = 0;

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	int* a = ArrayUtility2::contact(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++)cout << a[i] << ' ';
	cout << endl;

	int* b = ArrayUtility2::remove(x, y, 5, size);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 "<< size << endl;
	for (int i = 0; i < size; i++)cout << b[i] << ' ';
}