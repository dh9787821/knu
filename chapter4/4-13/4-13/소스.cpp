#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
public:
	Histogram();
	Histogram(string str);
	void put(string str);
	void putc(char c);
	void print();
};
Histogram::Histogram() { this->str = ""; }
Histogram::Histogram(string str) { 
	this->str = str;
	cout << str << endl;
}
void Histogram::put(string str) {
	this->str.append(str);
	cout << str;
}
void Histogram::putc(char c) {
	string s;
	s = c;
	this->str.append(s);
	cout << c;
}
void Histogram::print() {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if ((65 <= str[i] and str[i] <= 90) or (97 <= str[i] and str[i] <= 122)) { count++; }
	}
	cout << endl << endl << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl << endl;
	for (int i = 65; i <= 90; i++) {
		count = 0;
		for (int j = 0; j < str.length(); j++) {
			if (i == str[j] or i + 32 == str[j]) { count++; }
		}
		cout << char(i) << " (" << count << ")	: ";
		for (int i = 0; i < count; i++) { cout << "*"; }
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}