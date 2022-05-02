#pragma once
class DatabaseReader {
private:
	std::stringstream readDatabase(std::string filename);
public:
	std::vector<std::string> getData(std::string filename);
};