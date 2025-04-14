#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string str[100][2];
	static int point;
public:
	static void put(string tag, string info);
	static void print(string s = "");
};
string Trace::str[100][2];
int Trace::point = 0;
void Trace::put(string tag, string info) {
	str[point][0] = tag;
	str[point][1] = info;
	point++;
}
void Trace::print(string s) {
	if (s == "") {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < point; i++) cout << str[i][0] << ":" << str[i][1] << endl;
	}
	else {
		cout << "----- " << s << "태그의 Trace 정보를 출력합니다. ----- " << endl;
		for (int i = 0; i < point; i++) if (s == str[i][0])cout << str[i][0] << ":" << str[i][1] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}