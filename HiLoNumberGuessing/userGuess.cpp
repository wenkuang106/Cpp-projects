#include "hilo.h"
#include <iostream>

void userGuess() {
	int rand{ randomGen() };
	std::cout << "Enter an Integer: ";
	int iGuess{ };
	int chance{ };
	do
	{
		std::cin >> iGuess;
		if (iGuess > rand) {
			std::cout << iGuess << " is too large go smaller" << '\n';
		}
		else if (iGuess < rand) {
			std::cout << iGuess << " is too small go bigger" << '\n';
		}
		else if (iGuess == rand) {
			std::cout << "Damn you got it right, CONGRATS!" << std::endl;
			std::cout << "The number was " << rand << '\n';
			break;
		}
		chance++;
		if (iGuess != rand) {
			std::cout << "Opp you got " << life - chance << " chances left :(" << std::endl;
		}
		if (chance == life) {
			std::cout << "You lost LOL!" << '\n';
			break;
		}
		else if (iGuess != rand) {
			std::cout << "Enter a guess: ";
		}
	} while (iGuess != rand);
}