#include <iostream>
#include <cstdlib> 
#include <string>
#include <algorithm>

int amount() {
    std::cout << "How many times do you wish to flip the coin [Please note max is 100]: ";
    int times{ };
    std::cin >> times;
    return times;
}

int returnee() {
    int ran = rand() % 2;
    return ran;
}

std::string variable() {
    std::cout << "What would you like HEADS to be Yes or No: ";
    std::string head{ };
    std::getline(std::cin >> std::ws, head);
    return head;
}

bool question() {
    std::cout << "Do you wish to see all the flips? (y/n): ";
    char selection;
    std::cin >> selection;
    return (selection == 'y' || selection == 'Y');
}

bool questionAgain() {
    std::cout << "Are you sure you don't want to see all the flips? (y/n): ";
    char selection;
    std::cin >> selection;
    return (selection == 'y' || selection == 'Y');
}

void intro() {
    std::cout << "Welcome to the decision maker that will solve all of your Yes/No decisions \n\n";
}

int main() {
    intro();
    srand(time(NULL));
    const int a{ amount() };
    std::string head{ variable() };
    std::string tail{  };
    if (head == "yes" || head == "Yes" || head == "YES") {
        tail = "no";
    }
    else {
        tail = "yes";
    }
    //std::cout << head << '\n' << tail;
    std::string result[100];
    for (int i = 0; i <= a; i++) {
        int x(returnee());
        switch (x) {
        case 0:
            //std::cout << "heads:" << head << '\n';
            result[i] = head;
            break;
        case 1:
            //std::cout << "tails:" << tail << '\n';
            result[i] = tail;
            break;
        }
    }
    /*char selection{ question() };
    if (selection) {
      for (int count = 0; count < a; count++) {
        std::cout << result[count] << '\n';
      }
    }*/
    int n = sizeof(result) / sizeof(result[0]);
    std::cout << "Number of times 'Yes' appears: " << std::count(result, result + a, "yes") << '\n';
    if ((std::count(result, result + a, "yes") > (a / 2))) {
        std::cout << "The final answer is a YES!!! \n";
    }
    else if ((std::count(result, result + a, "yes")) == (std::count(result, result + a, "no"))) {
        std::cout << "Try again result was tied! \n";
    }
    else {
        std::cout << "The final answer is a NO!!! \n";
    }
    char selection{ question() };
    if (selection) {
        for (int count = 0; count < a; count++) {
            std::cout << result[count] << '\n';
        }
    }
    /*char selection2{ questionAgain() };
    if (selection2) {
      for (int count2 = 0; count2 < a; count2++) {
        std::cout << result[count2] << '\n';
      }
    }*/
    return 0;
}