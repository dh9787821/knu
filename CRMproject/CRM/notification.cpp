#include <iostream>
#include <string>
#include <windows.h>
#include "notification.h"
using namespace std;

void Notification::run(CSVData data) {
	while (1) {
		char check, loop;
		cout << "������ ���� �л��� �й��� �Է��� �ּ���>> ";
		cin >> student_number;
		cout << "������ �����ðڽ��ϱ�?(y/n)>> ";
		cin >> check;
		if (check == 'y') {
			string url = "https://mail.google.com/mail/?view=cm&fs=1&to=";
			for (auto it = data.begin(); it != data.end(); ++it) {
				if ((*it)[0] == to_string(student_number)) {
					url += (*it)[5];
					break;
				}
			}
			ShellExecuteA(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
			cout << "���������� ó���Ǿ����ϴ�" << endl;
		}
		else if (check == 'n') cout << "��ҵǾ����ϴ�" << endl;
		cout << "�ٸ� ���ϵ� �̾ �����ðڽ��ϱ�?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
}