// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string strInt;
    std::string strExpo;
    int userNum;
    int expoNum;
    int loopCounter = 0;
    int answer = 1;

    // input
    std::cout << "This program calculates exponents." << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> strInt;
    std::cout << "Enter an exponent: ";
    std::cin >> strExpo;

    // process and output
    try {
        userNum = std::stoi(strInt);
        expoNum = std::stof(strExpo);
        if (userNum < 0) {
            std::cout << "This is not a positive integer.";
        } 
        for (int loopCounter = 0; loopCounter < expoNum; loopCounter++) {
            answer = answer * userNum;
        }
        std::cout << userNum << "^" << expoNum << " = " << answer;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
