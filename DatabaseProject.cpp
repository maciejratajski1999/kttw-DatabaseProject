// DatabaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "file_manager.cpp"

int main()
{
    std::vector<std::string> split = splitString("test,string", ',');
    printVector(split);
    return 0;
}

