#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
Person::Person(){}
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person person[3];
	string input;
	int index;
	cout << "����� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		getline(cin, input);
		index = input.find(' ');
		person[i].set(input.substr(0, index), input.substr(index+1));
	}
	cout << "��� ����� �̸��� " << person[0].getName() << ' ' << person[1].getName() << ' ' << person[2].getName() << endl;
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> input;
	for (int i = 0; i < 3; i++) {
		if (person[i].getName() == input) { cout << "��ȭ��ȣ�� " << person[i].getTel(); }
	}
}