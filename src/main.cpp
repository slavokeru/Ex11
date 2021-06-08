// Copyright 2021
#include <iostream>
#include <ctime>

#include "train.h"

int main() {
    srand(time(0));
    Train train;
    int numberCages = 100;
    for (int i = 0; i < numberCages; ++i) {
        train.addCage();
    }
    train.printCages();
    std::cout << train.length();
    return 0;
}
