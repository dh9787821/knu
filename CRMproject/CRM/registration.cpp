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
		cout << "학생정보를 입력하세요" << endl;
		cout << "학번>> "; cin >> student_number;
		cout << "패스워드>> "; cin >> pw;
		cout << "이름>> "; cin >> name;
		cout << "생년월일 ex)19980101 >> "; cin >> birth;
		cout << "전화번호 ex) 01012345678 >>"; cin >> tel;
		cout << "메일>> "; cin >> mail;
		cout << "학과>> "; cin >> department;
		cout << "학년>> "; cin >> grader;
		cout << "성적>> "; cin >> GPA;

		Record new_row = { to_string(student_number), pw, name, to_string(birth), to_string(tel), mail, department, to_string(grader), to_string(GPA), "-"};
		cout << "등록하시겠습니까?(y/n)";
		cin >> check;
		if (check == 'y') {
			db.addInfo(csv, new_row);
			cout << "정상적으로 등록되었습니다" << endl;
		}
		else if (check == 'n') cout << "취소되었습니다" << endl;
		cout << "다른 학생도 이어서 등록하시겠습니까?(y/n)>> ";
		cin >> loop;
		if (loop == 'y') {}
		else if (loop == 'n') break;
	}
	
	
}