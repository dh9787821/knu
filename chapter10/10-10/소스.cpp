#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nation {
public:
	Nation(){ cout << "***** ������ �������߱� ������ �����մϴ�. *****" << endl; }
	vector<string> nation = {"����", "����", "���ѹα�", "�Ϻ�", "�߱�", "������", "�̱�", "�ʸ���", "ĳ����"};
	vector<string> capital = {"������", "����", "����", "����", "����¡", "�ĸ�", "�ͽ���", "���Ҷ�", "��Ÿ��"};
};

bool check(string nation, string capital, Nation n) {
	for (int i = 0; i < n.nation.size(); i++) if (n.nation[i] == nation and n.capital[i] == capital) return true;
	return false;
}

int main() {
	srand((unsigned)time(0));
	Nation n;	
	while (1) {
		int choice;
		cout << "�����Է�: 1, ����: 2, ����: 3 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "���� " << n.nation.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
			while (1) {
				string tmp_name, tmp_capital;
				cout << n.nation.size() + 1 << ">>";
				cin >> tmp_name >> tmp_capital;
				if (check(tmp_name, tmp_capital, n)) cout << "already exists !!" << endl;
				else if (tmp_name == "no" and tmp_capital == "no") break;
				else n.nation.push_back(tmp_name); n.capital.push_back(tmp_capital);
			}
		}
		else if (choice == 2) {
			while (1) {
				int random = rand()% n.nation.size();
				string question= n.nation[random], answer;
				cout << question <<"�� ������?" << endl;
				cin >> answer;
				if (answer==n.capital[random])cout << "Correct !!" << endl;
				else if (answer == "exit") break;
				else cout << "No !!" << endl;
			}
			
		}
		else if (choice == 3) break;
	}
}