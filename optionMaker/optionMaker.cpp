#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

int amount() {
    std::cout << "How much options are there [Max:50]: ";
    int times{};
    std::cin >> times;
    return times;
}

int ran(int aziz) {
    int ran = rand() % aziz;
    //std::cout << '\n' << ran << '\n';
    return ran;
}

void choice() { std::cout << "Enter your option: "; }

int main() {
    srand(time(NULL));
    int time{ amount() };
    std::string choices[50];
    int iii = 0;
    while (iii < time) {
        choice();
        std::string choice{};
        std::getline(std::cin >> std::ws, choice);
        choices[iii] = choice;
        iii++;
    }
    for (int count = 0; count < time; count++) {
        std::cout << choices[count];
        if (count != time - 1) {
            std::cout << " , ";
        }
    }
    int x{ ran(time) };
    //std::cout << x << '\n';
    std::cout << '\n' << "You're random choice is: " << choices[x] << '\n';
    return 0;
}