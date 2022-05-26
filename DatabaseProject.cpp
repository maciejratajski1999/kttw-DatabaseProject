// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "FileManager.cpp"
#include "DatabaseReader.cpp"

int main()
{

    DatabaseReader d("database.csv");
    std::vector<std::string> data = d.getData();
    printVector(data);

    Student tomek = Student("Tomek", "Atomek", 123457, "123457@student.pwr.edu.pl");
    //std::cout << (tomek.toString()) << std::endl;
    d.addStudent(tomek);
    printVector(d.getData());
    return 0;
}

