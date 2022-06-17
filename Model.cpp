//
// Created by Maciej on 10.06.2022.
//

#include "Model.h"

std::vector<std::string> Model::toVector() {
//    std::vector<std::string> vector;
//    for (auto& i : this->fields) vector.push_back((i));
    return this->fields;
}

std::string Model::toString(){
    std::string string;
    for (auto& i : this->toVector()) {
        string =  string + "," + i;
    }
    string.erase(0, 1);
    return string;
}
