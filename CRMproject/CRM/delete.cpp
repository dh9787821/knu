#include <iostream>
#include <string>
#include "delete.h"
using namespace std;

void Delete::run(DB& db, CSVData& csv) {
	while (1) {
		char check, loop;
		cout << "삭제할 학번을 입력해 주세요>> ";
		cin >> student_number;
		bool found;
		found = db.inStudent(csv, to_string(student_number));
		if (!found) cout << "해당 학번의 학생이 존재하지 않습니다." << endl;
		else {
			cout << "정말로 삭제하시겠습니까?(y/n)>> ";
			cin >> check;
			if (check == 'y') {
				db.del(csv, to_string(student_number));
				cout << "정상적으로 삭제되었습니다" << endl;
			}
			else if (check == 'n') {
				cout << "취소되었습니다" << endl;
			}
		}
		cout << "다른 학생도 이어서 삭제하시겠습니까?(y/n)>> ";
		cin >> loop;
		if (loop == 'n') break;
	}
}
