#pragma once

#include <string>

struct Person {

    Person (const std::string companyName,
           const std::string owner,
           const std::string phone,
           const std::string address,
           const std::string typeActivity);

    std::string _companyName ;
    std::string _owner       ;
    std::string _phone       ;
    std::string _address     ;
    std::string _typeActivity;
};
