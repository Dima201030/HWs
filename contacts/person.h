#pragma once
#include <string>

// Тема: Конструкторы, деструкторы Задание.
// Создайте приложение "Телефонная книга".
//     Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса. Наполните класс переменными-членами, функция- ми-членами, конструкторами, inline-функциями-членами, используйте инициализаторы, реализуйте деструктор. Обязательно необходимо выделять динамически память под ФИО. Предоставьте пользователю возможность до- бавлять новых абонентов, удалять абонентов, искать або- нентов по ФИО, показывать всех абонентов, сохранять информацию в файл и загружать из файла.
//

class Person {
public:
    Person(const std::string &FCs,
           const int &homeNumber,
           const int &workNumber,
           const int mobileNumber,
           const std::string &additionalInformation);

    ~Person();

    int homeNumber() const;
    int workNumber() const;
    int mobileNumber() const;
    std::string *FCs() const;
    std::string additionalInformation() const;

    void setHomeNumber(int newHomeNumber);
    void setWorkNumber(int newWorkNumber);
    void setMobileNumber(int newMobileNumber);
    void setFCs(const std::string &newFCs);
    void setAdditionalInformation(const std::string &newAdditionalInformation);

private:
    int _homeNumber, _workNumber, _mobileNumber;
    std::string *_FCs = nullptr, _additionalInformation;
};

