#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max) {
	int n = rand() % (max - min + 1) + min;
	return n;
}
char Random::nextAlphabet() {
	int n;
	while (1) {
		n = rand() % (122 - 65 + 1) + 65;
		if (n > 97 or n < 90) break;
	}
	return char(n);
}
double Random::nextDouble() {
	int n = rand() * 99;
	double d = double(n) / 10000000;
	return d;
}

int main() {
	int a = 1, b = 100, c = 10;
	Random::seed();
	cout << a << "에서 " << b << "까지 랜덤한 정수 " << c << "개를 출력합니다" << endl;
	for (int i = 0; i < c; i++) cout << Random::nextInt(a, b)<< ' ';
	cout << endl << "알파벳을 랜덤하게 " << c << "개를 출력합니다" << endl;
	for (int i = 0; i < c; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl << "랜덤한 실수를 " << c << "개를 수력합니다" << endl;
	for (int i = 0; i < c; i++) cout << Random::nextDouble() << ' ';
}