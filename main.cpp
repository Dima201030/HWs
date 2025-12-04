#include <iostream>

#include "hw1129.h"

int main() {

    std::cout << "Hello IT Top!" << std::endl;

    deleteTheLastS("resources/1129Example.txt", "resources/1129Result.txt");

    std::cout << maxStrLen("resources/1129Example.txt") << std::endl;
    return 0;
}
