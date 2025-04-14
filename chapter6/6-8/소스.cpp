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
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < point; i++) cout << str[i][0] << ":" << str[i][1] << endl;
	}
	else {
		cout << "----- " << s << "�±��� Trace ������ ����մϴ�. ----- " << endl;
		for (int i = 0; i < point; i++) if (s == str[i][0])cout << str[i][0] << ":" << str[i][1] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}