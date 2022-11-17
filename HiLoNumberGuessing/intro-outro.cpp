#include "hilo.h"
#include <iostream>

void intro() {
	std::cout << "===================== Hi-Lo Guessing Game =====================" << '\n';
	std::cout << "Instructions: You have " << life << " chances guess the number from 0 - 99!" << '\n';
	std::cout << "Try your worst!" << '\n' << '\n';
}

void outro() {
	char ans{ };
	while (ans != 'N' || ans != 'n') {
		std::cout << "Do you wish to play again? (Y/N)";
		std::cin >> ans;
		if (ans == 'Y' || ans == 'y') {
			main();
		}
		else {
			break;
		}
		/*do {
			std::cout << "Do you wish to play again? (Y/N)";
			std::cin >> ans;
			if (ans == 'Y' || ans == 'y') {
				main();
			}
		} while (ans != 'N' && ans != 'n');*/
	}
}