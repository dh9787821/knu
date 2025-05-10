#include <iostream>
#include <string>
using namespace std;

class Printer {
	string model, manufacturer;
	int printedCount = 0, availableCount;
public:
	Printer(string model = "", string manufacturer = "", int availableCount = 0) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount;
	}
	void print(int pages) { printedCount += pages; availableCount -= pages; cout << "����Ʈ�Ͽ����ϴ�." << endl; }
	void check() { cout << model << " ," << manufacturer << " ,�������� " << availableCount << "�� ,"; }
	int papercheck() { return availableCount; }
};

class InkJetPrinter :public Printer {
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableInk = 0) :Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void check() { Printer::check(); cout << "������ũ " << availableInk << endl; }
	void printInkJet(int pages);
};
void InkJetPrinter::printInkJet(int pages) {
	if (pages > availableInk) cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else if (pages > papercheck()) cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		availableInk -= pages;
		print(pages);
	}
}

class LaserPrinter :public Printer {
	int availableToner;
public:
	LaserPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableToner = 0) :Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner; 
	}
	void check() { Printer::check(); cout << "������� " << availableToner << endl; }
	void printLaser(int pages);
};
void LaserPrinter::printLaser(int pages) {
	if (pages > availableToner) cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else if (pages > papercheck()) cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		availableToner -= pages;
		print(pages);
	}
}

int main() {
	InkJetPrinter I("Officejet V40", "HP", 5, 10);
	LaserPrinter L("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; I.check();
	cout << "������ : "; L.check();
	cout << endl;
	while (1) {
		int printer, pages;
		char choice;
		cout << "������(1:��ũ��,2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		if (printer == 1) I.printInkJet(pages);
		else if (printer == 2) L.printLaser(pages);
		I.check();
		L.check();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> choice;
		if (choice == 'n')break;
		cout << endl;
	}
}