#pragma once
#pragma once
#include <vector>
#include <string>
using namespace std;

using Record = vector<string>;
using CSVData = vector<Record>;

class DB {
public:
    CSVData read_csv(const string& filename);
    Record split_csv_line(const string& line);

    void addInfo(CSVData& data, const Record& new_row);
    void addMemo(CSVData& data, string content, int student_number);
    void del(CSVData& data, const string& target_snum);
    void close(const string& filename, const CSVData& data);
    bool inStudent(CSVData data, string student_number);
};