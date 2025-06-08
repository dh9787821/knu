#include <iostream>
#include <string>
#include "memo.h"
using namespace std;

void Memo::run(DB& db, CSVData& csv) {
	while (1) {
		char check, loop;
		bool found;
		string content;
		cout << "�޸��� �л��� �й��� �Է��� �ּ���>> ";
		cin >> student_number;
		found = db.inStudent(csv, to_string(student_number));
		if (!found) cout << "�ش� �й��� �л� ������ ã�� �� �����ϴ�." << endl;
		cout << "�޸� �Է��� �ּ���>> ";
		cin.ignore();
		getline(cin, content);
		cout << "�����Ͻðڽ��ϱ�?(y/n)";
		cin >> check;
		if (check == 'y') {
			db.addMemo(csv, content, student_number);
			cout << "���������� ����Ǿ����ϴ�" << endl;
		}
		else if (check == 'n') cout << "��ҵǾ����ϴ�" << endl;
		cout << "�ٸ� �޸� �̾ �Է��Ͻðڽ��ϱ�?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
	
}