#include<iostream>
#include<string>
#include"DatabaseReader.h"
#include<fstream>
#include<sstream>
#include<vector>

std::stringstream DatabaseReader::readDatabase(std::string fileName) {
	std::ifstream file(fileName);
	std::stringstream buffer;
	buffer << file.rdbuf();
	file.close();
	return buffer;
}

std::vector<std::string> DatabaseReader::getData(std::string filename) {
	std::stringstream buffer = readDatabase(filename);
	std::vector<std::string> data;
	std::string tempLine;
	while (std::getline(buffer, tempLine)) {
		data.push_back(tempLine);
	}

	return data;
}
