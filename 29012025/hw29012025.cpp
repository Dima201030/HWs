#include "hw29012025.h"

#include <string>
#include <fstream>
#include <cstddef>
#include <iostream>

int countsInFile(const std::string &path, const std::string &word) {
    std::ifstream file(path);

    if (!file) {
        return -1;
    }

    std::string line;
    size_t lineNumber = 0;
    int count = 0;

    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != std::string::npos) {
            ++count;
            std::cout << "Найдено слово в строке номер " << lineNumber << " : " << line << " : " << pos << '\n';
            pos += word.length();
        }
        ++lineNumber;
    }

    return count;
}
