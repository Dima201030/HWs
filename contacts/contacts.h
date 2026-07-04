#pragma once

// Тема: Конструкторы, деструкторы Задание.
// Создайте приложение "Телефонная книга".
//     Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная информация о контакте) внутри соответствующего класса. Наполните класс переменными-членами, функция- ми-членами, конструкторами, inline-функциями-членами, используйте инициализаторы, реализуйте деструктор. Обязательно необходимо выделять динамически память под ФИО. Предоставьте пользователю возможность до- бавлять новых абонентов, удалять абонентов, искать або- нентов по ФИО, показывать всех абонентов, сохранять информацию в файл и загружать из файла.
//

#include <vector>
#include "person.h"
#include "common.h"

class Contacts final : private Person {
public:
    Contacts();

    void addNewPerson(Person &person);
    void deletePersonIndex(const int &index);
    Person findPersonFCs(const std::string &FCs);
    void printAllPersons();
    void saveInformations(const std::string &path);

private:
    DELETE_COPY_CONSTRUCTOR(Contacts);

    std::vector<Person> _persons;

};
