#pragma once
#include <iostream>
#include "db.h"
class Delete {
private:
	int student_number;
public:
	void run(DB& db, CSVData& csv);
};