#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int r = 0, int g = 0, int b = 0) { this->r = r; this->g = g; this->b = b; }
	friend Color operator+(Color op1, Color op2);
	void show() { cout << r << ' ' << g << ' ' << b << endl; }
	friend bool operator==(Color op1, Color op2);
};
Color operator+ (Color op1, Color op2) {
	Color tmp;
	tmp.r = op1.r + op2.r;
	tmp.g = op1.g + op2.g;
	tmp.b = op1.b + op2.b;
	return tmp;
}
bool operator==(Color op1, Color op2) {
	if ((op1.r == op2.r and op1.g == op2.g) and op1.b == op2.b) return true;
	else return false;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)cout << "보라색이 맞음";
	else cout << "보라색이 아님";
}