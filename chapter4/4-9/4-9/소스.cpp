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
	cout << "사람과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		getline(cin, input);
		index = input.find(' ');
		person[i].set(input.substr(0, index), input.substr(index+1));
	}
	cout << "모든 사람의 이름은 " << person[0].getName() << ' ' << person[1].getName() << ' ' << person[2].getName() << endl;
	cout << "전화번호를 검색합니다. 이름을 입력하세요>>";
	cin >> input;
	for (int i = 0; i < 3; i++) {
		if (person[i].getName() == input) { cout << "전화번호는 " << person[i].getTel(); }
	}
}