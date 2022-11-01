#include <iostream> 
#include <cstdlib> // library containing the std::rand function; generating a random number
const int life = 7;

// point of this game is to let the console randomly generate a number and user guess 
/*
Functions to be needed:
int randomGen()
void guessLow()
void guessHigh()
void guessCorrect()
*/
void intro() {
	std::cout << "============== Hi-Lo Guessing Game ==============" << '\n'; 
	std::cout << "Instructions: You have 7 chances guess the number from 0 - 99!" << '\n';
	std::cout << "Try your worst!" << '\n' << '\n';
}

int randomGen() {
	int rand = std::rand() % 100;   // setting the variable 'rand' to equal to a random # from 0 - 99
	return rand;
}

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
	intro();
	randomGen();
	userGuess();
	playAgain();
}