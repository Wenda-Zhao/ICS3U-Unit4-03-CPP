// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program is for for loop

#include <iostream>
#include <cmath>

int main() {
    // this fuction is for for loop
    int loop_number = 0;
    int basic_number = -1;
    std::string positive_number;
    int positive_number_int;
    int square_number;

    // input
    std::cout << "Enter a non-negative number: ";
    std::cin >> positive_number;

    // process & output
    try {
        positive_number_int = std::stoi(positive_number);
        std::cout << "It is a integer\n";
        if (positive_number_int > 0) {
            for (loop_number = 0; basic_number < positive_number_int;
                 loop_number++) {
                basic_number = basic_number + 1;
                square_number = pow(basic_number, 2);
                std::cout << loop_number << "² = "
                << square_number << std::endl;
            }
        } else {
            std::cout << "It is not a non-negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not a integer";
    }
}
