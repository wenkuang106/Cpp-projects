#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

void intro() {
	std::cout << "--------------------------------------------------" << '\n'
			  << "---------- Welcom to Password Generator ----------" << '\n'
			  << "--------------------------------------------------" << '\n';
}

int passLength() {
	std::cout << "Enter the length of the desired password: ";
	int x{};
	std::cin >> x;
	return x;
}