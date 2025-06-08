#include <iostream>
#include <string>
#include "delete.h"
using namespace std;

void Delete::run(DB& db, CSVData& csv) {
	while (1) {
		char check, loop;
		cout << "������ �й��� �Է��� �ּ���>> ";
		cin >> student_number;
		bool found;
		found = db.inStudent(csv, to_string(student_number));
		if (!found) cout << "�ش� �й��� �л��� �������� �ʽ��ϴ�." << endl;
		else {
			cout << "������ �����Ͻðڽ��ϱ�?(y/n)>> ";
			cin >> check;
			if (check == 'y') {
				db.del(csv, to_string(student_number));
				cout << "���������� �����Ǿ����ϴ�" << endl;
			}
			else if (check == 'n') {
				cout << "��ҵǾ����ϴ�" << endl;
			}
		}
		cout << "�ٸ� �л��� �̾ �����Ͻðڽ��ϱ�?(y/n)>> ";
		cin >> loop;
		if (loop == 'n') break;
	}
}
