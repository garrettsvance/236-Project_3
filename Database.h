//
// Created by garre on 10/21/2022.
//

#ifndef INC_236_PROJECT_3_DATABASE_H
#define INC_236_PROJECT_3_DATABASE_H
#include "Relation.h"
#include <string>
#include <vector>
#include <map>

using namespace std;

class Database {
public:
   map<string, Relation*> data;
};

#endif //INC_236_PROJECT_3_DATABASE_H
