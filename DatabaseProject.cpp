// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "FileManager.h"
#include "DatabaseReader.h"
#include "Student.h"

int main()
{

    DatabaseReader d("database.csv");
    std::vector<std::string> data = d.getData();
    printVector(data);
    std::vector<Student> students = readStudents(data);
    std::vector<std::string> s;
    for (auto & student : students) s.push_back(student.toString());
    printVector(s);

    Student tomek = Student("Antek", "Majtek", 82223, "82223@student.pwr.edu.pl");
    d.addModel(tomek);
    std::cout << std::endl;
    printVector(d.getData());

    system("pause");
    return 0;
}

