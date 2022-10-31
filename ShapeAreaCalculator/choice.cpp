#include "calculator.h"
#include <iostream>

int userChoice()
{
    int choice{ };
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "You've chosen Circle!" << '\n' << "Please enter the length of the radius: " << '\n';
        double r{ };
        std::cin >> r;
        circle(r);
        intro();
        userChoice();
    }
    else if (choice == 2)
    {
        std::cout << "You've chosen Triangle!" << '\n' << "Please enter the length of the Base: " << '\n';
        double b, h{ };
        std::cin >> b;
        std::cout << "Please enter the Height: \n";
        std::cin >> h;
        triangle(b, h);
        intro();
        userChoice();
    }
    else if (choice == 3)
    {
        std::cout << "You've chosen Square!" << '\n' << "Please enter the length: " << '\n';
        double l{ };
        std::cin >> l;
        square(l);
        intro();
        userChoice();
    }
    else if (choice == 4)
    {
        std::cout << "You've chosen Trapezoid!" << '\n' << "Please enter the length of the Base A: " << '\n';
        double ba, bb, h{ };
        std::cin >> ba;
        std::cout << "Please enter the length of Base B: " << '\n';
        std::cin >> bb;
        std::cout << "Please enter the Height: " << '\n';
        std::cin >> h;
        trapezoid(ba, bb, h);
        intro();
        userChoice();
    }
    else if (choice == 5)
    {
        std::cout << "Thanks for opening this program, CIAO!!" << '\n';
    }
    return 0;
}