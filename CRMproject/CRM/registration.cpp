#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "registration.h"
using namespace std;

void Registration::run(DB& db, CSVData& csv) {
	while (1) {
		char check, loop;
		cout << "�л������� �Է��ϼ���" << endl;
		cout << "�й�>> "; cin >> student_number;
		cout << "�н�����>> "; cin >> pw;
		cout << "�̸�>> "; cin >> name;
		cout << "������� ex)19980101 >> "; cin >> birth;
		cout << "��ȭ��ȣ ex) 01012345678 >>"; cin >> tel;
		cout << "����>> "; cin >> mail;
		cout << "�а�>> "; cin >> department;
		cout << "�г�>> "; cin >> grader;
		cout << "����>> "; cin >> GPA;

		Record new_row = { to_string(student_number), pw, name, to_string(birth), to_string(tel), mail, department, to_string(grader), to_string(GPA), "-"};
		cout << "����Ͻðڽ��ϱ�?(y/n)";
		cin >> check;
		if (check == 'y') {
			db.addInfo(csv, new_row);
			cout << "���������� ��ϵǾ����ϴ�" << endl;
		}
		else if (check == 'n') cout << "��ҵǾ����ϴ�" << endl;
		cout << "�ٸ� �л��� �̾ ����Ͻðڽ��ϱ�?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
	
	
}