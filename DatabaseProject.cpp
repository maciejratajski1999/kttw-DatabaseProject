// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "FileManager.h"
#include "DatabaseReader.h"

int main()
{

    DatabaseReader d("database.csv");
    std::vector<std::string> data = d.getData();
    printVector(data);

    Student tomek = Student("Antek", "Majtek", 82223, "82223@student.pwr.edu.pl");
    d.addStudent(tomek);
    std::cout << std::endl;
    printVector(d.getData());

    system("pause");
    return 0;
}

