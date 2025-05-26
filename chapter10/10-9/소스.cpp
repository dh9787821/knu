#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	double sum = 0;
	while (1) {
		int n;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		sum += n;
		for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
		cout << endl << "평균 = " << sum/v.size() << endl;
	}
}