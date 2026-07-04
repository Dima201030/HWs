#pragma once

#include <string>

struct Person {

    Person (const std::string companyName, std::string owner, std::string phone, std::string address);

    std::string _companyName;
    std::string _owner      ;
    std::string _phone      ;
    std::string _address    ;
};
