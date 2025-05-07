#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int r = 0, int g = 0, int b = 0) { this->r = r; this->g = g; this->b = b; }
	Color operator+(Color op2);
	void show() { cout << r << ' ' << g << ' ' << b << endl; }
	bool operator==(Color op2);
};
Color Color::operator+ (Color op2) {
	Color tmp;
	tmp.r = this->r + op2.r;
	tmp.g = this->g + op2.g;
	tmp.b = this->b + op2.b;
	return tmp;
}
bool Color::operator==(Color op2) {
	if ((this->r == op2.r and this->g == op2.g) and this->b == op2.b) return true;
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