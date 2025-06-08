#include <iostream>
using namespace std;

#include "registration.h"
#include "delete.h"
#include "memo.h"
#include "inquiry.h"
#include "notification.h"
#include "db.h"


int main() {
	DB db;
	string filename = "customer_db.csv";
	CSVData csv = db.read_csv(filename);
	Registration r;
	Delete d;
	Inquiry i;
	Memo m;
	Notification n;
	cout << "프로그램을 시작합니다" << endl;
	while (1) {
		int choice;
		cout << "----------------------" << endl;
		cout << "1. 신규학생 등록" << endl << "2. 학생 삭제" << endl << "3. 학생 상세 정보 조회" << endl <<
			"4. 메모" << endl << "5. 메일 보내기" << endl << "6. 종료" << endl;
		cout << "----------------------" << endl;
		cout << "원하는 메뉴를 선택하세요(1~7 숫자입력)>> ";
		cin >> choice;
		if (choice == 1) { r.run(db, csv); } //학생등록
		else if (choice == 2) { d.run(db, csv); } //학생삭제
		else if (choice == 3) { i.run(csv); } //학생정보조회
		else if (choice == 4) { m.run(db, csv); } //메모
		else if (choice == 5) { n.run(csv); } //메일
		else if (choice == 6) {
			cout << "프로그램을 종료합니다." << endl;
			db.close("customer_db.csv", csv);
			break;
		}
		else cout << "1~7의 올바른 숫자를 입력하세요" << endl << endl;
	}
}