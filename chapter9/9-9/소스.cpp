#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model, manufacturer;
	int printedCount = 0, availableCount;
public:
	Printer(string model = "", string manufacturer = "", int availableCount = 0) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;
	int papercheck() { return availableCount; }
};

class InkJetPrinter :public Printer {
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableInk = 0) :Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void show() { cout << model << " ," << manufacturer << " ,�������� " << availableCount << "�� ,������ũ " << availableInk << endl; }
	void printInkJet(int pages);
	void print(int pages) { printedCount += pages; availableCount -= pages; cout << "����Ʈ�Ͽ����ϴ�." << endl; }
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
	void show() { cout << model << " ," << manufacturer << " ,�������� " << availableCount << "�� ,������� " << availableToner << endl; }
	void printLaser(int pages);
	void print(int pages) { printedCount += pages; availableCount -= pages; cout << "����Ʈ�Ͽ����ϴ�." << endl; }
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
	InkJetPrinter* I = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* L = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; I[0].show();
	cout << "������ : "; L[0].show();
	cout << endl;
	while (1) {
		int printer, pages;
		char choice;
		cout << "������(1:��ũ��,2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		if (printer == 1) I[0].printInkJet(pages);
		else if (printer == 2) L[0].printLaser(pages);
		I[0].show();
		L[0].show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> choice;
		if (choice == 'n')break;
		cout << endl;
	}
}