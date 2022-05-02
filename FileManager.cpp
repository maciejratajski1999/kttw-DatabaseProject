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

std::string leftPadding(std::string s, const int width) {
	int padding = width - s.size();
	std::string paddedString = s;
	for (int i = 0; i < padding; i++) {
		paddedString += " ";
	}
	return paddedString;
}