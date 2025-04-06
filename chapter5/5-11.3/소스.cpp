#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	Book(const Book& book);
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book() { delete[] title; }
Book::Book(const Book& book) {
	int len = strlen(book.title);
	this->title = new char[len + 1];
	strcpy(this->title, book.title);
	this->price = book.price;
}
void Book::set(const char* title, int price) {
	delete[] this->title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}