#include <iostream>
#include <cstdlib> 
#include <string>

int amount() {
    std::cout << "How many times do you wish to flip the coin: ";
    int times{ };
    std::cin >> times;
    return times - 1;
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
    for (int i = 0; i <= a; i++) {
        int x(returnee());
        switch (x) {
        case 0:
            std::cout << "heads:" << head << '\n';
            break;
        case 1:
            std::cout << "tails:" << tail << '\n';
            break;
        }
    }
    return 0;
}