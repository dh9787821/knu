#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

class Manage{
	vector<Shape*> v;
public:
	Manage(){cout << "그래픽 에디터입니다." << endl;}
	void input(int s){
		if (s == 1) v.push_back(new Circle);
		else if (s == 2) v.push_back(new Rect);
		else if (s == 3) v.push_back(new Line);
	}
	void del(int index) { 
		vector<Shape*>::iterator it = v.begin();
		for (int i = 0; i < index; i++) it++;
		v.erase(it); }
	void view(){
		for (int i = 0; i < v.size(); i++) { cout << i << ": "; v[i]->paint(); }
	}
};

int main() {
	Manage m;
	while (1) {
		int choice;
		cout << "삽입:1, 삭제:2, 모두보기:3. 종료:4 >> ";
		cin >> choice;
		if (choice == 1) { 
			int s;
			cout << "선:1, 원:2, 사각형:3 >> ";
			cin >> s;
			m.input(s);
		}
		else if (choice == 2) {
			int index;
			cout << "삭제하고자 하는 도형의 인덱스 >> ";
			cin >> index;
			m.del(index);
		}
		else if (choice == 3) { m.view(); }
		else if (choice == 4) break;
	}
}