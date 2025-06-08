#pragma once
#include <iostream>
#include "db.h"

class Inquiry {
	int student_number;
public:
	void run(const CSVData& data);
};