#include <iostream>
using namespace std;

int main() {
	char name[100], adress[100], age[100];
	cout << "�̸���?";
	cin.getline(name, 100, '\n');
	cout << "�ּҴ�?";
	cin.getline(adress, 100, '\n');
	cout << "���̴�?";
	cin.getline(age, 100, '\n');
	cout << name << ", " << adress << ", " << age << "��";
}