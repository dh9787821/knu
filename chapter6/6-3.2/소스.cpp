#include <iostream>
using namespace std;

int big(int a, int b, int max = 100) {
	int bigger;
	if (a >= b) bigger = a;
	else bigger = b;
	if (bigger >= max) return max;
	else return bigger;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}