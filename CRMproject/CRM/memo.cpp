#include <iostream>
#include <string>
#include "memo.h"
using namespace std;

void Memo::run(DB& db, CSVData& csv) {
	while (1) {
		char check, loop;
		bool found;
		string content;
		cout << "메모할 학생의 학번을 입력해 주세요>> ";
		cin >> student_number;
		found = db.inStudent(csv, to_string(student_number));
		if (!found) cout << "해당 학번의 학생 정보를 찾을 수 없습니다." << endl;
		cout << "메모를 입력해 주세요>> ";
		cin.ignore();
		getline(cin, content);
		cout << "저장하시겠습니까?(y/n)";
		cin >> check;
		if (check == 'y') {
			db.addMemo(csv, content, student_number);
			cout << "정상적으로 저장되었습니다" << endl;
		}
		else if (check == 'n') cout << "취소되었습니다" << endl;
		cout << "다른 메모도 이어서 입력하시겠습니까?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
	
}