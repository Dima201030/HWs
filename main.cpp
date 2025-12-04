#include <iostream>

#include "hw1129.h"

int main() {

    std::cout << "Hello IT Top!" << std::endl;

    //11.29.2025

    // deleteTheLastS("resources/1129Example.txt", "resources/1129Result.txt");

    // std::cout << maxStrLen("resources/1129Example.txt") << std::endl;

    // std::cout << countWordInFile("resources/1129Example.txt", "99");

    replaceWordInFileLive("resources/1129Example.txt", "resources/1129Result.txt", "99", "hello");

    return 0;
}
