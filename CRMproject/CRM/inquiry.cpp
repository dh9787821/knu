#include <iostream>
#include "inquiry.h"
using namespace std;

void Inquiry::run(const CSVData& data) {
    while (1) {
        char loop;
        bool found = false;
        cout << "��ȸ�� �л��� �й��� �Է��� �ּ���>> ";
        cin >> student_number;

        for (const auto& row : data) {
            if (!row.empty() && row[0] == to_string(student_number)) {
                cout << "�л� ����" << endl;
                cout << "�й�: " << row[0] << endl;
                cout << "�н�����: " << row[1] << endl;
                cout << "�̸�: " << row[2] << endl;
                cout << "�������: " << row[3] << endl;
                cout << "��ȭ��ȣ: " << row[4] << endl;
                cout << "����: " << row[5] << endl;
                cout << "�а�: " << row[6] << endl;
                cout << "�г�: " << row[7] << endl;
                cout << "����: " << row[8] << endl;
                cout << "�޸�: " << row[9] << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "�ش� �й��� �л� ������ ã�� �� �����ϴ�." << endl;

        cout << "�ٸ� ������ �̾ ��ȸ�Ͻðڽ��ϱ�?(y/n)>> ";
        cin >> loop;
        if (loop == 'n') break;
    }
}
