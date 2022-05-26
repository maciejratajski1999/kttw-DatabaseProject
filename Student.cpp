#include"Student.h"
Student::Student(std::string firstName, std::string lastName, int indexNumber, std::string email) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->indexNumber = indexNumber;
	this->email = email;
}


std::vector<std::string> Student::toVector() {
	std::vector<std::string> vector;
	vector.push_back(firstName);
	vector.push_back(lastName);	
	vector.push_back(std::to_string(indexNumber));
	vector.push_back(email);
	return vector;
}

std::string Student::toString(){
	std::string string;
	for (auto& i : this->toVector()) {
		string =  string + "," + i;
	}
	string.erase(0, 1);
	return string;
}