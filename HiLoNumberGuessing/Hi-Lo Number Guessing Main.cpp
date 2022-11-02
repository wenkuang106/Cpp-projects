#include "hilo.h"
#include <iostream> 
#include <cstdlib> // library containing the std::rand function; generating a random number

// point of this game is to let the console randomly generate a number and user guess 
/*
Functions to be needed:
int randomGen()
void guessLow()
void guessHigh()
void guessCorrect()
*/

int main() { 
	srand(time(NULL));				// initializing a random seed 
	intro();
	randomGen();
	userGuess();
	outro();
}