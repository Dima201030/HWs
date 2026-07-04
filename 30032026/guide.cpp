#include "guide.h"

Guide::Guide(const std::string filePath) {
    _persons = fileToPerson(filePath);
}

Person Guide::findC(const std::string &companyName)
{
    return *std::find_if(_persons.begin(), _persons.end(), [companyName](const Person& p){ return p._companyName == companyName; });
}

Person Guide::findO(const std::string &owner)
{
    return *std::find_if(_persons.begin(), _persons.end(), [owner](const Person& p){ return p._owner == owner; });
}

Person Guide::findP(const std::string &phone)
{
    return *std::find_if(_persons.begin(), _persons.end(), [phone](const Person& p){ return p._phone == phone; });
}

Person Guide::findA(const std::string &address)
{
    return *std::find_if(_persons.begin(), _persons.end(), [address](const Person& p){ return p._address == address; });
}

Person Guide::findT(const std::string &typeActivity)
{
    return *std::find_if(_persons.begin(), _persons.end(), [typeActivity](const Person& p){ return p._typeActivity == typeActivity; });
}

std::vector<Person> Guide::fileToPerson(const std::string &filePath) {

    std::vector<Person> contacts;

    std::fstream file(filePath);

    if (!file.is_open()) {

        return contacts;
    }

    std::string line;

    while (std::getline(file, line)) {
        if (!line.empty() && line.front() == 'C' && line.back() == ';') {
            std::string companyName ;
            std::string owner       ;
            std::string phone       ;
            std::string address     ;
            std::string typeActivity;
            for (int i = 0; i < line.size(); ++i) {
                switch (line[i]) {
                case 'C':
                    if (i + 1 < line.size() && line[i + 1] == '"') {
                        int temp = 0;
                        for (int j = i + 2; j < line.size() && line[j] != '"'; ++j) {
                            ++temp;
                            companyName += line[j];
                        }
                        i += temp + 1;
                    }

                    break;
                case 'O':
                    if (i + 1 < line.size() && line[i + 1] == '"') {
                        int temp = 0;
                        for (int j = i + 2; j < line.size() && line[j] != '"'; ++j) {
                            owner += line[j];
                        }
                        i += temp + 1;
                    }
                case 'P':
                    if (i + 1 < line.size() && line[i + 1] == '"') {
                        int temp = 0;
                        for (int j = i + 2; j < line.size() && line[j] != '"'; ++j) {
                            phone += line[j];
                        }
                        i += temp + 1;
                    }
                    break;
                case 'A':
                    if (i + 1 < line.size() && line[i + 1] == '"') {
                        int temp = 0;
                        for (int j = i + 2; j < line.size() && line[j] != '"'; ++j) {
                            address += line[j];
                        }
                        i += temp + 1;
                    }
                    break;
                case 'T':
                    if (i + 1 < line.size() && line[i + 1] == '"') {
                        int temp = 0;
                        for (int j = i + 2; j < line.size() && line[j] != '"'; ++j) {
                            typeActivity += line[j];
                        }
                        i += temp + 1;
                    }
                    break;
                }

            }
            contacts.push_back(Person(companyName, owner, phone, address, typeActivity));
        }
    }

    return contacts;
}
