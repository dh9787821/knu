#pragma once
#include <iostream>
#include <string>
#include "db.h"

class Notification {
	int student_number;
	std::string content;
public:
	void run(CSVData data);
};