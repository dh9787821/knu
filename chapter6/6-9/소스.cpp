#include <iostream>
#include <string>
using namespace std;

class Board {
	static int line;
	static string str[999];
public:
	static void add(string s);
	static void print();
};
string Board::str[999];
int Board::line = 0;
void Board::add(string s) {
	str[line] = s;
	line++;
}
void Board::print() {
	cout << "************* �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < line; i++) cout << i << ": " << str[i] << endl;
	cout << endl;
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}