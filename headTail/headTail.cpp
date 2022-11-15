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
    std::cout << "What would you like HEAD to be Yes or No: ";
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

int main() {
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
    char selection{ question() };
    if (selection) {
       for (int count = 0; count < a; count++) {
           std::cout << result[count] << '\n';
       }
    }
    int n = sizeof(result) / sizeof(result[0]);
    std::cout << "Number of times 'Yes' appears: " << std::count(result, result + a, "yes");
    return 0;
}