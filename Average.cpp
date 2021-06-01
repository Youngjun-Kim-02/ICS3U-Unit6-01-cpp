// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: June 2021
// This program uses an array

#include <iostream>
#include <random>


main() {
    // this function uses an array

    int randomNumbers[10];
    int randomNumber;
    int total = 0;
    float average;

    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        randomNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = randomNumber;
        total += randomNumbers[loop_counter];
        std::cout << "The random number is: " << randomNumber << std::endl;
    }

    average = total / 10.0;
    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;
}
