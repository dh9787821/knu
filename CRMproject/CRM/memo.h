#pragma once
#include <iostream>
#include <string>
#include "db.h"

class Memo {
	int student_number;
	std::string content;
public:
	void run(DB& db, CSVData& csv);
};