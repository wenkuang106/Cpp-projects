#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

int choice() {
	int input{};
	std::cout << "So what will it be: ";
	std::cin >> input;
	return input;
}

void intro() {
	std::cout << "--------------------------------------------------" << '\n'
			  << "---------- Welcom to Password Generator ----------" << '\n'
			  << "--------------------------------------------------" << '\n';
	std::cout << "             1. Generate a passowd                " << '\n';
	std::cout << "             2.        Exit                       " << '\n';
}

int passLength() {
	std::cout << "Enter the length of the desired password: ";
	int x{};
	std::cin >> x;
	return x;
}

void again() {
	std::cout << "\nWould you like to generate another password? (Y/N)" << '\n';
	char input{};
	std::cin >> input;
	if ((input == 'y') || (input == 'Y')) {
		main();
	}
	else if ((input == 'n') || (input == 'N')) {
		outro();
	}
}

void outro() {
	std::cout << "CIAO!" << '\n';
}