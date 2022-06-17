#pragma once
#include"Model.h"

class DatabaseReader {
private:
	std::string filename;
	int getMaxID();
	std::stringstream readDatabase();
	void writeDatabase(std::string data);
	void addLine(std::string line);
public:
	DatabaseReader(std::string filename);
	std::vector<std::string> getData();
	void addModel(Model model);
    void removeModel(Model model);
    std::vector<Model> getModelData(Model model);
};