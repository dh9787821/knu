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
	void show() { cout << model << " ," << manufacturer << " ,남은종이 " << availableCount << "장 ,남은잉크 " << availableInk << endl; }
	void printInkJet(int pages);
	void print(int pages) { printedCount += pages; availableCount -= pages; cout << "프린트하였습니다." << endl; }
};
void InkJetPrinter::printInkJet(int pages) {
	if (pages > availableInk) cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
	else if (pages > papercheck()) cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
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
	void show() { cout << model << " ," << manufacturer << " ,남은종이 " << availableCount << "장 ,남은토너 " << availableToner << endl; }
	void printLaser(int pages);
	void print(int pages) { printedCount += pages; availableCount -= pages; cout << "프린트하였습니다." << endl; }
};
void LaserPrinter::printLaser(int pages) {
	if (pages > availableToner) cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
	else if (pages > papercheck()) cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	else {
		availableToner -= pages;
		print(pages);
	}
}

int main() {
	InkJetPrinter* I = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* L = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; I[0].show();
	cout << "레이저 : "; L[0].show();
	cout << endl;
	while (1) {
		int printer, pages;
		char choice;
		cout << "프린터(1:잉크젯,2:레이저)와 매수 입력>>";
		cin >> printer >> pages;
		if (printer == 1) I[0].printInkJet(pages);
		else if (printer == 2) L[0].printLaser(pages);
		I[0].show();
		L[0].show();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> choice;
		if (choice == 'n')break;
		cout << endl;
	}
}