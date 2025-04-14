#include <iostream>
using namespace std;

class Myvector {
	int* mem;
	int size;
public:
	Myvector(int n, int val);
	~Myvector() { delete[] mem; }
};
Myvector::Myvector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	Myvector a, b(5, 2);
}