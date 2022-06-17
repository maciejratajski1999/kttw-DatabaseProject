#pragma once
#include"Model.h"

class Student : public Model{
	private:
		std::string firstName;
		std::string lastName;
		int indexNumber;
		std::string email;
	public:
		Student(std::string firstName, std::string lastName, int indexNumber, std::string email);
        Student(std::vector<std::string> fields);
        std::vector<Student> dataToModel(std::vector<std::string> data);
		//std::string getFirstName;
		//std::string getLastName;
		//int getIndexNumber;
		//std::string getEmail;
};