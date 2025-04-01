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
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::selectEspresso() {
	tong[0].consume();
	tong[1].consume();
	cout << "���������� �弼��" << endl;
}
void CoffeeVendingMachine::selectAmericano() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	cout << "�Ƹ޸�ī�� �弼��" << endl;
}
void CoffeeVendingMachine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
	cout << "����Ŀ�� �弼��" << endl;
}
void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run(){
	int n;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ� ******" << endl;
	while (1) {
		cout << "�޴��� �����ּ���(1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���)>> ";
		cin >> n;
		if (n == 1) { 
			if (tong[0].getSize() == 0 or tong[1].getSize() == 0) { cout << "���ᰡ �����մϴ�" << endl; continue; }
			selectEspresso(); 
		}
		else if (n == 2) { 
			if (tong[0].getSize() == 0 or tong[1].getSize() <= 1) { cout << "���ᰡ �����մϴ�" << endl; continue; }
			selectAmericano(); 
		}
		else if (n == 3) { 
			if ((tong[0].getSize() == 0 or tong[1].getSize() <= 1) or tong[2].getSize() == 0) { cout << "���ᰡ �����մϴ�" << endl; continue; }
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