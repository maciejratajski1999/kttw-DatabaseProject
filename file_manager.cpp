#include<string>
#include<vector>
#include<iostream>
std::vector<std::string> splitString(std::string str, char separator) {
	std::vector<std::string> split;
	std::string temp = "";
	for (char& c: str) {
		if (c == separator) {
			split.push_back(temp);
			temp = "";
		}
		else {
			temp += c;
		}
	}
	split.push_back(temp);
	return split;
}

template<typename T>
void printVector(std::vector<T> v) {
	for (auto& i : v) {
		std::cout << i << std::endl;
	}
}