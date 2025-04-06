#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "¿ø" << endl; }
};
Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len+1];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book() { delete[] title; }
void Book::set(char* title, int price) {
	delete[] title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}
