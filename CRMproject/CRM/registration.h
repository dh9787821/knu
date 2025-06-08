#pragma once
#include <iostream>
#include <string>
#include "db.h"

class Registration {
	int student_number, birth, tel, grader;
	double GPA;
	std::string pw, name, mail, department;
public:
	void run(DB& db, CSVData& csv);
};