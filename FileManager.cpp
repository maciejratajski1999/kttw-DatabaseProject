#include<iostream>
#include "FileManager.h"

std::vector<std::string> splitString(std::string str, char separator) {
	std::vector<std::string> split;
	std::string temp = "";
	for (char& c: str) {
		if (c == separator) {
			split.push_back(temp);
			temp = "";
		}
		else {
			temp += c;
		}
	}
	split.push_back(temp);
	return split;
}

std::string leftPadding(std::string s, const int width) {
	int padding = width - s.size();
	std::string paddedString = s;
	for (int i = 0; i < padding; i++) {
		paddedString += " ";
	}
	return paddedString;
}

std::vector<Student> readStudents(std::vector<std::string> data) {
    std::vector<Student> students;
    for (auto& line :data){
        std::vector<std::string> splitLine = splitString(line, ',');
        std::vector<std::string> fields = std::vector<std::string>(splitLine.begin() + 1, splitLine.end());
        students.push_back(Student(fields));
    }
    return students;
}