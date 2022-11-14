#include "calculator.h"
#include <iostream>

void intro()
{
    std::cout << "Hello There, Enter number of the Shape of the Area you wish to solve: " << '\n'
        << "1. Circle" << '\n'
        << "2. Triangle" << '\n'
        << "3. Square" << '\n'
        << "4. Trapezoid" << '\n'
        << "5. Exit Program!" << '\n';
}

bool againAsk() {
    std::cout << "Would you like to try again? (Y/N): ";
    char response{ };
    std::cin >> response;
    if (response == 'y' || response == 'Y')
        return true;
    else if (response == 'n' || response == 'N')
        return false;
}

void outro() {
    std::cout << "Thanks for opening this program, CIAO!!" << '\n';
}

void againRe() {
    if (againAsk()) {
        intro();
        userChoice();
    }
    else
        outro();
}