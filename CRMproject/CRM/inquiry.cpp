#include <iostream>
#include "inquiry.h"
using namespace std;

void Inquiry::run(const CSVData& data) {
    while (1) {
        char loop;
        bool found = false;
        cout << "조회할 학생의 학번을 입력해 주세요>> ";
        cin >> student_number;

        for (const auto& row : data) {
            if (!row.empty() && row[0] == to_string(student_number)) {
                cout << "학생 정보" << endl;
                cout << "학번: " << row[0] << endl;
                cout << "패스워드: " << row[1] << endl;
                cout << "이름: " << row[2] << endl;
                cout << "생년월일: " << row[3] << endl;
                cout << "전화번호: " << row[4] << endl;
                cout << "메일: " << row[5] << endl;
                cout << "학과: " << row[6] << endl;
                cout << "학년: " << row[7] << endl;
                cout << "성적: " << row[8] << endl;
                cout << "메모: " << row[9] << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "해당 학번의 학생 정보를 찾을 수 없습니다." << endl;

        cout << "다른 정보도 이어서 조회하시겠습니까?(y/n)>> ";
        cin >> loop;
        if (loop == 'n') break;
    }
}
