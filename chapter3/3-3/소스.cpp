#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	string name, getOwner();
	int id, balance, inquiry(), withdraw(int w);
	void deposit(int d);
	Account();
	Account(string n, int i, int b);
};
Account::Account() {
	name = "a";
	id = balance = 0;
}
Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
void Account::deposit(int d) {
	balance += d;
}
int Account::withdraw(int w) {
	balance -= w;
	return w;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}