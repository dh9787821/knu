#include <iostream>
using namespace std;

int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	char name1[100], name2[100], name3[100], name4[100], name5[100];
	string longchar;
	int longnum;
	cin.getline(name1, 100, ';');
	cin.getline(name2, 100, ';');
	cin.getline(name3, 100, ';');
	cin.getline(name4, 100, ';');
	cin.getline(name5, 100, ';');
	cout << "1 : " << name1 << '\n';
	cout << "2 : " << name2 << '\n';
	cout << "3 : " << name3 << '\n';
	cout << "4 : " << name4 << '\n';
	cout << "5 : " << name5 << '\n';
	longnum = strlen(name1);
	longchar = name1;
	if (longnum < strlen(name2)) {
		longnum = strlen(name2);
		longchar = name2;
	}
	if (longnum < strlen(name3)) {
		longnum = strlen(name3);
		longchar = name3;
	}
	if (longnum < strlen(name4)) {
		longnum = strlen(name4);
		longchar = name4;
	}
	if (longnum < strlen(name5)) {
		longnum = strlen(name5);
		longchar = name5;
	}
	cout << "가장 긴 이름은 " << longchar;
}