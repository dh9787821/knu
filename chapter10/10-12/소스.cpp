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
		v.push_back(Word("stock", "주식"));
		v.push_back(Word("picture", "사진"));
		v.push_back(Word("bear", "곰"));
		v.push_back(Word("honey", "애인"));
		v.push_back(Word("transaction", "거래"));
		v.push_back(Word("painting", "그림"));
		v.push_back(Word("banana", "바나나"));
		v.push_back(Word("university", "종합대학"));
		v.push_back(Word("darling", "자기"));
		v.push_back(Word("scissors", "가위"));
	}
	void insert() {
		cout << "영어단어에 exit을 입력하면 끝" << endl;
		string english, korean;
		while (1) {
			cout << "영어 >>";
			cin >> english;
			if (english == "exit") break;
			cout << "한글 >>";
			cin >> korean;
			v.push_back(Word(english, korean));
		}
		cout << endl;
	}
	void test() {
		cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료." << endl;
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
	cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;
	while (1) {
		int choice;
		cout << "어휘 삽입: 1, 어휘 테스트 : 2, 프로그램 종료:그외키 >> ";
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