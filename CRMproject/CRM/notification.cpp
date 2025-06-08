#include <iostream>
#include <string>
#include <windows.h>
#include "notification.h"
using namespace std;

void Notification::run(CSVData data) {
	while (1) {
		char check, loop;
		cout << "메일을 보낼 학생의 학번을 입력해 주세요>> ";
		cin >> student_number;
		cout << "메일을 보내시겠습니까?(y/n)>> ";
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
			cout << "정상적으로 처리되었습니다" << endl;
		}
		else if (check == 'n') cout << "취소되었습니다" << endl;
		cout << "다른 메일도 이어서 보내시겠습니까?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
}