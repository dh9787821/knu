#include <iostream>
#include <string>
using namespace std;

class Shape{
protected:
	virtual void create(string memory[], int& index) = 0;
};

class Line :public Shape {
public:
	void create(string memory[], int& index) { memory[++index] = "Line"; }
};

class Circle :public Shape {
public:
	void create(string memory[], int& index) { memory[++index] = "Circle"; }
};

class Rect :public Shape {
public:
	void create(string memory[], int& index) { memory[++index] = "Rectangle"; }
};

class GraphicEditor {
protected:
	string memory[999];
	int index = -1;
	void input(int shape) {
		if (shape == 1) { Line l; l.create(memory, index); }
		else if (shape == 2) { Circle c; c.create(memory, index); }
		else if (shape == 3) { Rect r; r.create(memory, index); }
	}
	void del(int index) { memory[index] = ""; for (int i = index; i < this->index; i++) memory[i] = memory[i + 1]; this->index--; }
	void view() { for (int i = 0; i <= index; i++)cout << i << ": " << memory[i] << endl; }
};


class UI :public GraphicEditor{
public:
	UI() { cout << "그래픽 에디터 입니다." << endl; }
	void run() {
		while (1) {
			int choice;
			cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
			cin >> choice;
			if (choice == 1) { 
				int shape;
				cout << "선:1, 원:2, 사각형:3 >> ";
				cin >> shape;
				input(shape);
			}
			else if(choice==2){
				int index;
				cout << "삭제하고자하는 도형의 인덱스 >> ";
				cin >> index;
				del(index);
			}
			else if (choice == 3) { view(); }
			else if (choice == 4) { break; }

		}
	}
};

int main() {
	UI ui;
	ui.run();
}