// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "FileManager.cpp"
#include "DatabaseReader.cpp"

int main()
{

    DatabaseReader d;
    std::vector<std::string> data = d.getData("database.csv");
    printVector(data);
    return 0;
}

