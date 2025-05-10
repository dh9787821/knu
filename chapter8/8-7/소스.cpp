#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void write(int index, char c) { mem[index] = c; }
	char read(int index) { return mem[index]; }
};

class ROM :public BaseMemory {
public:
	ROM(int memorysize, char x[], int size) :BaseMemory(memorysize) { for (int i = 0; i < size; i++) write(i, x[i]); }
	char read(int i) { return BaseMemory::read(i); }
};

class RAM :public BaseMemory {
public:
	RAM(int memorysize):BaseMemory(memorysize){}
	void write(int index, char c) { BaseMemory::write(index, c); }
	char read(int i) { return BaseMemory::read(i); }
};

int main() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++)mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++)cout << mainMemory.read(i);
}