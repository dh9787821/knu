#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray operator=(const SortedArray& op2);
	void show();
};
SortedArray::SortedArray() { size = 0; p = NULL; }
SortedArray::SortedArray(SortedArray& src) {
	size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++) p[i] = src.p[i];
}
SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) this->p[i] = p[i];
}
SortedArray::~SortedArray() { delete[] p; }
SortedArray SortedArray::operator+(SortedArray& op2){
	SortedArray tmp;
	tmp.size = size + op2.size;
	tmp.p = new int[tmp.size];
	for (int i = 0; i < size; i++) tmp.p[i] = p[i];
	for (int i = 0; i < op2.size; i++) tmp.p[i + size] = op2.p[i];
	return tmp;
}
SortedArray SortedArray::operator=(const SortedArray& op2){
	this->size = op2.size;
	p = new int[op2.size];
	for (int i = 0; i < op2.size; i++) p[i] = op2.p[i];
	return *this;
}
void SortedArray::sort() {
	while (1) {
		int c = 0;
		for (int i = 0; i < size-1; i++) {
			if (p[i] > p[i + 1]) {
				swap(p[i], p[i + 1]);
				c++;
			}
		}
		if (c == 0)break;
	}
}
void SortedArray::show() {
	sort();
	cout << "배열출력 : ";
	for (int i = 0; i < size; i++) cout << p[i] << ' ';
	cout << endl;
}

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}