#include <string>
#include <fstream>

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

    for (int i = 0; i < countLines - 1; ++i) {
        getline(efile, line);
        rFile << line << '\n';
    }
}
