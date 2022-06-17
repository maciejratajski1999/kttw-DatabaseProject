#include"Student.h"
Student::Student(std::string firstName, std::string lastName, int indexNumber, std::string email) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->indexNumber = indexNumber;
	this->email = email;
    this->fields = {this->firstName, this->lastName, std::to_string(this->indexNumber), this->email};
}

Student::Student(std::vector<std::string> fields){
    this->fields = fields;
    this->firstName = fields[0];
    this->lastName = fields[1];
    this->indexNumber = std::stoi( fields[2].substr(0, 1));
    this->email = fields[3];
}


