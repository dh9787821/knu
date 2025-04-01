#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

class Player {
	string player;
public:
	Player();
	Player(string str);
};
Player::Player() { player = ""; }
Player::Player(string str) { player = str; }

class Gambling {
public:
	int stop = 0;
	void play(string player1, string player2);
	void call(string player);
};
void Gambling::play(string player1, string player2) {
	cin.ignore();
	while (1) {
		char c = ' ';
		cout << player1 << ":<Enter>";
		cin.get(c);
		if (c == '\n') { call(player1); }
		if (stop == 1) { break; }
		cout << player2 << ":<Enter>";
		cin.get(c);
		if (c == '\n') { call(player2); }
		if (stop == 1) { break; }
	}
}
void Gambling::call(string player) {
	int num1 = rand()%3, num2 = rand()%3, num3 = rand()%3;
	cout << "		" << num1 << "	" << num2 << "	" << num3 << "	";
	if (num1 == num2 and num1 == num3) { 
		cout << player << "�� �¸�!!";
		stop = 1;
	}
	else {cout<<"�ƽ�����!"<<endl; }
}

int main() {
	srand((unsigned)time(0));
	string s1, s2;
	Player* p = new Player[2];
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	cout << "ù��° ���� �̸�>>";
	cin >> s1;
	p[0] = s1;
	cout << "�ι�° ���� �̸�>>";
	cin >> s2;
	p[1] = s2;
	Gambling g;
	g.play(s1, s2);
	delete[] p;
}