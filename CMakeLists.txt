cmake_minimum_required(VERSION 3.22)
project (DatabaseProject)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES DatabaseProject.cpp FileManager.cpp FileManager.h DatabaseReader.cpp DatabaseReader.h Student.cpp Student.h database.csv)

add_executable(DatabaseProject ${SOURCE_FILES})
