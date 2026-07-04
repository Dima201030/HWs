#include "person.h"


Person::Person(const std::string companyName,
               const std::string owner,
               const std::string phone,
               const std::string address,
               const std::string typeActivity
               ) :
            _companyName(companyName),
            _owner(owner),
            _phone(phone),
            _address(address),
            _typeActivity(typeActivity) {}
