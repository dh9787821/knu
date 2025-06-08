#include <iostream>
#include "db.h"
#include <fstream>
#include <sstream>

Record DB::split_csv_line(const string& line) {
    Record result;
    stringstream ss(line);
    string cell;
    while (getline(ss, cell, ',')) {
        result.push_back(cell);
    }
    return result;
}
CSVData DB::read_csv(const string& filename) {
    CSVData data;
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        data.push_back(split_csv_line(line));
    }
    return data;
}

void DB::addInfo(CSVData& data, const Record& new_row) {
    data.push_back(new_row);
}
void DB::addMemo(CSVData& data, string content, int student_number) {
    for (auto& row : data) {
        if (row[0] == to_string(student_number)) { row[9] = content; break; }
    }
}
void DB::del(CSVData& data, const string& target_snum) {
    for (auto it = data.begin(); it != data.end(); ++it) {
        if ((*it)[0] == target_snum) {
            data.erase(it);
            break;
        }
    }
}
void DB::close(const string& filename, const CSVData& data) {
    ofstream file(filename);
    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); i++) {
            file << row[i];
            if (i != row.size() - 1) file << ",";
        }
        file << "\n";
    }
}
bool DB::inStudent(CSVData data, string student_number) {
    bool found = false;
    for (const auto& row : data) if (!row.empty() && row[0] == student_number) { found = true; break; }
    if (!found) return false;
    else return true;
}