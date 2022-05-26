#pragma once
#include<string>
#include<vector>
class Student {
	private:
		std::string firstName;
		std::string lastName;
		int indexNumber;
		std::string email;
	public:
		Student(std::string firstName, std::string lastName, int indexNumber, std::string email);
		Student();
		//std::string getFirstName;
		//std::string getLastName;
		//int getIndexNumber;
		//std::string getEmail;
		std::vector<std::string> toVector();
		std::string toString();
};