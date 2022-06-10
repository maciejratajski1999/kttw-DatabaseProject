#include"Student.h"
Student::Student(std::string firstName, std::string lastName, int indexNumber, std::string email) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->indexNumber = indexNumber;
	this->email = email;
    this->fields = {this->firstName, this->lastName, std::to_string(this->indexNumber), this->email};
}


