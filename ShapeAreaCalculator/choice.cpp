#include "calculator.h"
#include <iostream>

int userChoice()
{
    int choice{ };
    std::cout << "Your Choice: ";
    std::cin >> choice;
    double r{ }, b{ }, h{ }, l{ }, ba{ }, bb{ }, ht{ };

    switch (choice) {
    case 1: 
        std::cout << "You've chosen Circle!" << '\n' << "Please enter the length of the radius: ";
        std::cin >> r;
        circle(r);
        againRe();
        break;
    case 2: 
        std::cout << "You've chosen Triangle!" << '\n' << "Please enter the length of the Base: ";
        std::cin >> b;
        std::cout << "Please enter the Height: ";
        std::cin >> h;
        triangle(b, h);
        againRe();
        break;
    case 3:
        std::cout << "You've chosen Square!" << '\n' << "Please enter the length: ";
        std::cin >> l;
        square(l);
        againRe();
        break;
    case 4:
        std::cout << "You've chosen Trapezoid!" << '\n' << "Please enter the length of the Base A: ";
        std::cin >> ba;
        std::cout << "Please enter the length of Base B: ";
        std::cin >> bb;
        std::cout << "Please enter the Height: ";
        std::cin >> ht;
        trapezoid(ba, bb, ht);
        againRe();
        break;
    case 5:
        std::cout << "Thanks for opening this program, CIAO!!" << '\n';
        break;
    default:
        std::cout << "What you've entered is incomprehensible, try again please! \n";
        userChoice();
        break; 
    }
    return 0;
}