#include <iostream> 
#include <cstdlib> // library containing the std::rand function; generating a random number

// point of this game is to let the console randomly generate a number and user guess 
/*
Functions to be needed:
int randomGen()
void guessTooLow()
void guessLow()
void guessHigh()
void guessTooHigh()
void guessCorrect()
*/
int randomGen() {
	int rand = std::rand() % 100;   // setting the variable 'rand' to equal to a random # from 0 - 99
	return rand;
}

void userGuess() {
	int rand{ randomGen() };
	std::cout << "Enter an Integer: ";
	int iGuess{ };
	do {
		std::cin >> iGuess;
		if (iGuess > rand) {
			std::cout << "Guess is too large go smaller" << '\n';
			std::cout << "Enter new guess: ";
		}
		else if (iGuess < rand) {
			std::cout << "Guess is too small go bigger" << '\n';
			std::cout << "Enter new guess: ";
		}
		else if (iGuess == rand)
		{
			std::cout << "Damn you got it right, CONGRATS!" << std::endl;
			std::cout << "The number was " << rand << '\n';
			break;
		}
	} while (iGuess != rand);
	
}

int main();

void playAgain() {
	char ans{ };
	do {
		std::cout << "Do you wish to play again? (Y/N)";
		std::cin >> ans;
		if (ans == 'Y' || ans == 'y') {
			main();
		}
	} while (ans != 'N' && ans != 'n');
}


int main() { 
	srand(time(NULL));				// initializing a random seed 
	randomGen();
	userGuess();
	playAgain();
}