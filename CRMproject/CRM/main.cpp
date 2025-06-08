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
	cout << "���α׷��� �����մϴ�" << endl;
	while (1) {
		int choice;
		cout << "----------------------" << endl;
		cout << "1. �ű��л� ���" << endl << "2. �л� ����" << endl << "3. �л� �� ���� ��ȸ" << endl <<
			"4. �޸�" << endl << "5. ���� ������" << endl << "6. ����" << endl;
		cout << "----------------------" << endl;
		cout << "���ϴ� �޴��� �����ϼ���(1~7 �����Է�)>> ";
		cin >> choice;
		if (choice == 1) { r.run(db, csv); } //�л����
		else if (choice == 2) { d.run(db, csv); } //�л�����
		else if (choice == 3) { i.run(csv); } //�л�������ȸ
		else if (choice == 4) { m.run(db, csv); } //�޸�
		else if (choice == 5) { n.run(csv); } //����
		else if (choice == 6) {
			cout << "���α׷��� �����մϴ�." << endl;
			db.close("customer_db.csv", csv);
			break;
		}
		else cout << "1~7�� �ùٸ� ���ڸ� �Է��ϼ���" << endl << endl;
	}
}