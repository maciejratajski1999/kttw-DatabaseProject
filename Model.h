//
// Created by Maciej on 10.06.2022.
//

#ifndef DATABASEPROJECT_MODEL_H
#define DATABASEPROJECT_MODEL_H
#include<string>
#include<vector>

class Model {
    public:
    std::vector<std::string> fields;
        std::vector<std::string> toVector();
        std::string toString();
};


#endif //DATABASEPROJECT_MODEL_H
