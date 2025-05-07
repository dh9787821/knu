#include <iostream>
using namespace std;

class Statistics {
	int s = 0;
	int* arr = new int[s];
public:
	bool operator!();
	Statistics& operator<<(int n);
	Statistics& operator>>(int& n);
	void operator~ ();
};
bool Statistics::operator!() {
	if (s==0) return false;
	else return true;
}
Statistics& Statistics::operator<<(int n) {
	s++;
	arr[s - 1] = n;
	return *this;
}
Statistics& Statistics::operator>>(int& n) {
	int sum = 0;
	for (int i = 0; i < s; i++) sum += arr[i];
	n = sum / s;
	return *this;
}
void Statistics::operator~() {
	for (int i = 0; i < s; i++) cout << arr[i] << ' ';
	cout << endl;
}


int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계데이터가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++)stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}