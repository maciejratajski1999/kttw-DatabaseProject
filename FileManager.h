//
// Created by Maciej on 28.05.2022.
//

#ifndef DATABASEPROJECT_FILEMANAGER_H
#define DATABASEPROJECT_FILEMANAGER_H
#include<string>
#include<vector>
#include <iostream>
#include "Student.h"

std::vector<std::string> splitString(std::string str, char separator);
template<typename T>
void printVector(std::vector<T> v) {
    for (auto& i : v) {
        std::cout << i << std::endl;
    }
}
std::string leftPadding(std::string s, const int width);
std::vector<Student> readStudents(std::vector<std::string> data);
#endif //DATABASEPROJECT_FILEMANAGER_H
