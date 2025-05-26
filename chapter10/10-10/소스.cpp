#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nation {
public:
	Nation(){ cout << "***** 나라의 수도맞추기 게임을 시작합니다. *****" << endl; }
	vector<string> nation = {"독일", "영국", "대한민국", "일본", "중국", "프랑스", "미국", "필리핀", "캐나다"};
	vector<string> capital = {"베를린", "런던", "서울", "도쿄", "베이징", "파리", "와싱턴", "마닐라", "오타와"};
};

bool check(string nation, string capital, Nation n) {
	for (int i = 0; i < n.nation.size(); i++) if (n.nation[i] == nation and n.capital[i] == capital) return true;
	return false;
}

int main() {
	srand((unsigned)time(0));
	Nation n;	
	while (1) {
		int choice;
		cout << "정보입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "현재 " << n.nation.size() << "개의 나라가 입력되어 있습니다." << endl << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
			while (1) {
				string tmp_name, tmp_capital;
				cout << n.nation.size() + 1 << ">>";
				cin >> tmp_name >> tmp_capital;
				if (check(tmp_name, tmp_capital, n)) cout << "already exists !!" << endl;
				else if (tmp_name == "no" and tmp_capital == "no") break;
				else n.nation.push_back(tmp_name); n.capital.push_back(tmp_capital);
			}
		}
		else if (choice == 2) {
			while (1) {
				int random = rand()% n.nation.size();
				string question= n.nation[random], answer;
				cout << question <<"의 수도는?" << endl;
				cin >> answer;
				if (answer==n.capital[random])cout << "Correct !!" << endl;
				else if (answer == "exit") break;
				else cout << "No !!" << endl;
			}
			
		}
		else if (choice == 3) break;
	}
}