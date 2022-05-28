#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include"DatabaseReader.h"

DatabaseReader::DatabaseReader(std::string filename){
	this->filename = filename;
}


std::stringstream DatabaseReader::readDatabase() {
	std::ifstream file(this->filename);
	std::stringstream buffer;
	buffer << file.rdbuf();
	file.close();
	return buffer;
}

std::vector<std::string> DatabaseReader::getData() {
	std::stringstream buffer = readDatabase();
	std::vector<std::string> data;
	std::string tempLine;
	while (std::getline(buffer, tempLine)) {
		data.push_back(tempLine);
	}

	return data;
}
int DatabaseReader::getMaxID() {
	std::vector<std::string> data = this->getData();
    int last;

    if (data.size() > 0){
        std::cout << data.size() <<std::endl;
        last = std::stoi( data.back().substr(0, 1));
    }
	else {
        last = 0;
    }
	return last;
}

void DatabaseReader::writeDatabase(std::string data) {
	std::ofstream WriteDatabaseFile(this->filename);
	WriteDatabaseFile << data;
	WriteDatabaseFile.close();
}

void DatabaseReader::addLine(std::string line) {
	std::stringstream buffer = this->readDatabase();
	std::string string;
	std::string tempLine;
	while (std::getline(buffer, tempLine)) {
		string = string + tempLine + "\n";
	}
	string = string + line;
	this->writeDatabase(string);
}

void DatabaseReader::addStudent(Student student) {
	int id = this->getMaxID() + 1;
	std::string stringID = std::to_string(id);
	std::string string = student.toString();
	string = stringID + "," + string;
    std::cout << string << std::endl;

	this->addLine(string);
}