#pragma once
class Oval {
public:
	int width, height, getWidth(), getHeight();
	void set(int w, int h), show();
	Oval();
	Oval(int w, int h);
	~Oval();
};