// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May DATE, 2021
// This program STUFF STUFF

#include <iostream>
#include <cmath>

// variables
int userNum;
int randomNum;
char playAgain;

int main() {
    // random number generator
    srand((unsigned) time(0));
    // create the random number
    randomNum = (rand() % 9);

    // make the string version of the var
    std::string userNumStr;

    while (true) {
        // get the number from the user
        std::cout << "\nGuess the random number between 0, 10: ";
        std::cin >> userNumStr;

        try {
            // try to turn it into a integer
            userNum = std::stoi(userNumStr);

            // if the number is outside of the acceptable range
            if (userNum < 0 || userNum > 10) {
                std::cout << "Number must be between 0 and 10\n";

            // otherwise
            } else {
                // if they guessed correctly
                if (userNum == randomNum) {
                    std::cout << userNum << " was the correct number!\n";

                    // ask if they would like to play again
                    std::cout << "Would you like to play again (y/n): ";
                    std::cin >> playAgain;

                    // if they would
                    if (playAgain == 'y' || playAgain == 'Y') {
                        main();

                    // if they don't
                    } else {
                    break;
                    }

                // if the user inputed the incorrect number
                } else {
                    std::cout << userNum << " was not the correct number\n";
                }
            }


        // if could not turn into integer
        } catch (std::invalid_argument) {
            std::cout << "That is not a valid number\n";
        }
    }
}
