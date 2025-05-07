#include <iostream>
using namespace std;

class Matrix {
	int m[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { m[0] = a; m[1] = b; m[2] = c; m[3] = d; }
	void show() { cout << "Matrix = { " << m[0] << ' ' << m[1] << ' ' << m[2] << ' ' << m[3] << " }" << endl; }
	Matrix operator+ (Matrix op2);
	Matrix& operator+= (Matrix op2);
	bool operator== (Matrix op2);
};
Matrix Matrix::operator+(Matrix op2) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) tmp.m[i] = this->m[i] + op2.m[i];
	return tmp;
}
Matrix& Matrix::operator+=(Matrix op2) {
	for (int i = 0; i < 4; i++) m[i] += op2.m[i];
	return *this;
}
bool Matrix::operator==(Matrix op2) {
	for (int i = 0; i < 4; i++) {
		if (m[i] != op2.m[i]) return false;
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) cout << "a and c are the same" << endl;
}