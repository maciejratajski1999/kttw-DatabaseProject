#pragma once
#include"Student.h"

class DatabaseReader {
private:
	std::string filename;
	int getMaxID();
	std::stringstream readDatabase();
	void writeDatabase(std::string data);
	void addLine(std::string line);
public:
	DatabaseReader(std::string filename);
	std::vector<std::string> getData();
	void addStudent(Student student);
};