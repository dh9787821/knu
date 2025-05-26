#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Word {
	string English, Korean;
public:
	Word(string english, string korean) { English = english; Korean = korean; }
	string getEnglish() { return English; }
	string getKorean() { return Korean; }
};

class WordManager {
	vector<Word> v;
public:
	WordManager() {
		v.push_back(Word("stock", "�ֽ�"));
		v.push_back(Word("picture", "����"));
		v.push_back(Word("bear", "��"));
		v.push_back(Word("honey", "����"));
		v.push_back(Word("transaction", "�ŷ�"));
		v.push_back(Word("painting", "�׸�"));
		v.push_back(Word("banana", "�ٳ���"));
		v.push_back(Word("university", "���մ���"));
		v.push_back(Word("darling", "�ڱ�"));
		v.push_back(Word("scissors", "����"));
	}
	void insert() {
		cout << "����ܾ exit�� �Է��ϸ� ��" << endl;
		string english, korean;
		while (1) {
			cout << "���� >>";
			cin >> english;
			if (english == "exit") break;
			cout << "�ѱ� >>";
			cin >> korean;
			v.push_back(Word(english, korean));
		}
		cout << endl;
	}
	void test() {
		cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� ����." << endl;
		while (1) {
			int answer_vector = rand() % v.size();
			int real_answer= (rand()%4)+1, user_answer;
			int example[4] = { -1 }, index = 1;
			example[0] = answer_vector;
			cout << v[answer_vector].getEnglish() << "?" << endl;
			for (int i = 1; i <= 4; i++) {
				if(i==real_answer) cout << "(" << i << ") " << v[answer_vector].getKorean() << ' ';
				else {
					int n = rand() % v.size();
					while ((n == example[0] or n == example[1]) or (n == example[2] or n == example[3])) n = rand() % v.size();
					cout << "(" << i << ") " << v[n].getKorean() << ' ';
					example[index++] = n;
				}
			}
			cout << ":>";
			cin >> user_answer;
			if (real_answer == user_answer) cout << "Excellent !!" << endl;
			else if (0 < user_answer and user_answer < 5) cout << "No. !!" << endl;
			else { cout << endl; break; }
		}
	}
};

int main() {
	srand((unsigned)time(0));
	WordManager wm;
	cout << "***** ���� ���� �׽�Ʈ�� �����մϴ�. *****" << endl;
	while (1) {
		int choice;
		cout << "���� ����: 1, ���� �׽�Ʈ : 2, ���α׷� ����:�׿�Ű >> ";
		cin >> choice;
		if (choice == 1) {
			wm.insert();
		}
		else if (choice == 2) {
			wm.test();
		}
		else break;
	}
}