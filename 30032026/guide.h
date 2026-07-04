#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

#include "person.h"

class Guide {
public:
    Guide(const std::string filePath);

    std::vector<Person> _persons;

    Person findC(const std::string& companyName );
    Person findO(const std::string& owner       );
    Person findP(const std::string& phone       );
    Person findA(const std::string& address     );
    Person findT(const std::string& typeActivity);
private:
    std::vector<Person> fileToPerson(const std::string &filePath);


};
