#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};
Buffer& append(Buffer& b, string text) {
	b.add(text);
	return b;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}