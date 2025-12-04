#include <string>
#include <fstream>
#include <iostream>

#include "hw1129.h"

void deleteTheLastS(const std::string &pathEFile, const std::string &pathRFile) {
    std::ifstream efile(pathEFile);

    if (!efile) {
        return;
    }

    std::string line;
    int countLines = 0;

    while (std::getline(efile, line)) {
        ++countLines;
    }

    if (countLines == 0) {
        return;
    }

    efile.clear();
    efile.seekg(0, std::ios::beg);

    std::ofstream rFile(pathRFile);

    for (size_t i = 0; i < countLines - 1; ++i) {
        getline(efile, line);
        rFile << line << '\n';
    }
}

int maxStrLen(const std::string &path) {
    std::ifstream file(path);

    if (!file) {
        return -1;
    }

    std::string line;
    int sizeLine = 0;

    while (std::getline(file, line)) {
        if (sizeLine < line.size()) {
            sizeLine = line.size();
        }
    }

    return sizeLine;
}

int countWordInFile(const std::string &path, const std::string &word) {
    std::ifstream file(path);

    if (!file) {
        return -1;
    }

    std::string line;
    // size_t lineNumber = 0; FOR DEBUG
    int count = 0;

    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != std::string::npos) {
            ++count;
            //std::cout << "Найдено слово в строке номер " << lineNumber << " : " << line << " : " << pos << '\n' FOR DEBUG
            pos += word.length();
        }
        // ++lineNumber; FOR DEBUG
    }

    return count;
}

void replaceWordInFileLive(const std::string &inputPath, const std::string &outputPath, const std::string &target, const std::string &replacement) {
    std::ifstream inFile(inputPath);
    std::ofstream outFile(outputPath);

    if (!inFile.is_open() || !outFile.is_open()) {
        return;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        std::string newLine;
        size_t pos = 0;

        while (pos < line.size()) {
            bool match = true;

            if (pos + target.size() <= line.size()) {
                for (size_t j = 0; j < target.size(); ++j) {
                    if (line[pos + j] != target[j]) {
                        match = false;
                        break;
                    }
                }
            } else {
                match = false;
            }

            if (match) {
                newLine += replacement;
                pos += target.size();
            } else {
                newLine += line[pos];
                ++pos;
            }
        }

        outFile << newLine << "\n";
    }
}
