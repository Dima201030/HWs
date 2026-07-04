#include "person.h"

Person::Person(const std::string &FCs, const int &homeNumber, const int &workNumber, const int mobileNumber, const std::string &additionalInformation) : _homeNumber(homeNumber), _workNumber(workNumber), _mobileNumber(mobileNumber), _additionalInformation(additionalInformation)
{
    _FCs = new std::string(FCs);
}

Person::~Person()
{
    delete _FCs;
}

int Person::homeNumber() const
{
    return _homeNumber;
}

void Person::setHomeNumber(int homeNumber)
{
    _homeNumber = homeNumber;
}

int Person::workNumber() const
{
    return _workNumber;
}

void Person::setWorkNumber(int workNumber)
{
    _workNumber = workNumber;
}

int Person::mobileNumber() const
{
    return _mobileNumber;
}

void Person::setMobileNumber(int mobileNumber)
{
    _mobileNumber = mobileNumber;
}

std::string *Person::FCs() const
{
    return _FCs;
}

void Person::setFCs(const std::string &FCs)
{
    delete _FCs;
    _FCs = new std::string(FCs);
}

std::string Person::additionalInformation() const
{
    return _additionalInformation;
}

void Person::setAdditionalInformation(const std::string &additionalInformation)
{
    _additionalInformation = additionalInformation;
}


