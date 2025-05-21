#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};

class IntStack :public AbstractStack {
	int capacity, index = -1;
	int* array;
public:
	IntStack(int capacity = 1) { this->capacity = capacity; array = new int[capacity];
	}
	~IntStack() { delete[] array; }
	bool push(int n) {
		if (index < capacity - 1) {
			index++;
			array[index] = n;
			return true;
		}
		else return false;
	}
	bool pop(int& n) {
		if (index > -1) {
			n = array[index];
			index--;
			return true;
		}
		else return false;
	}
	int size() { return index + 1; }
};

int main() {
	IntStack intstack(3);
	int n;
	for (int i = 0; i < 4; i++) {
		if (intstack.push(i+1)) cout << "push 성공" << endl;
		cout << "현재 스택에 저장된 정수의 개수: " << intstack.size() << endl;
	}
	for (int i = 0; i < 4; i++) if (intstack.pop(n)) cout << "pop 성공" << "(" << n << ")" << endl;
}