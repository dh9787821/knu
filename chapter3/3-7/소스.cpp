#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class EvenRandom {
public:
	int next(), nextInRange(int s, int f);
	EvenRandom();
};
EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}
int EvenRandom::next() {
	int n = rand();
	while (n % 2 == 1) {
		n = rand();
	}
	return n;
}
int EvenRandom::nextInRange(int s, int f) {
	int n = rand() % (f - s + 1) + s;
	while (n % 2 == 0) {
		n = rand() % (f - s + 1) + s;
	}
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}