#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

void Container::fill() { size = 10; }
void Container::consume() { size--; }
int Container::getSize() { return size; }
class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};
void CoffeeVendingMachine::fill() {
	tong[0].fill();
	tong[1].fill();
	tong[2].fill();
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::selectEspresso() {
	tong[0].consume();
	tong[1].consume();
	cout << "에스프레소 드세요" << endl;
}
void CoffeeVendingMachine::selectAmericano() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	cout << "아메리카노 드세요" << endl;
}
void CoffeeVendingMachine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
	cout << "설탕커피 드세요" << endl;
}
void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run(){
	int n;
	cout << "***** 커피자판기를 작동합니다 ******" << endl;
	while (1) {
		cout << "메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기)>> ";
		cin >> n;
		if (n == 1) { 
			if (tong[0].getSize() == 0 or tong[1].getSize() == 0) { cout << "원료가 부족합니다" << endl; continue; }
			selectEspresso(); 
		}
		else if (n == 2) { 
			if (tong[0].getSize() == 0 or tong[1].getSize() <= 1) { cout << "원료가 부족합니다" << endl; continue; }
			selectAmericano(); 
		}
		else if (n == 3) { 
			if ((tong[0].getSize() == 0 or tong[1].getSize() <= 1) or tong[2].getSize() == 0) { cout << "원료가 부족합니다" << endl; continue; }
			selectSugarCoffee(); 
		}
		else if (n == 4) { show(); }
		else if (n == 5) { fill(); }
	}
}

int main() {
	CoffeeVendingMachine c;
	c.run();
}