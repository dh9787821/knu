#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	double sum = 0;
	while (1) {
		int n;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		sum += n;
		for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
		cout << endl << "��� = " << sum/v.size() << endl;
	}
}