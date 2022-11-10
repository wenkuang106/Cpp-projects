#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

// generating a random number to be used for array selection 
int selectionGen() {
	// initializing a random seed
	srand(time(NULL));
	// generating a random number from 0 to 4
	int rand = std::rand() % 5;
	// due to rand can't equal 0 we will increase it by 1 
	if (rand == 0) {
		++rand;
	}
	return rand;
}

// generating a random index to be used later for random selection
int indexKey() {
	srand(time(NULL));
	int index = rand() % 26;
	return index;
}

int numGen() {
	srand(time(NULL));
	int t = rand() % 10;
	return t;
}