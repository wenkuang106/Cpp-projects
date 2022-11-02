#include "hilo.h"
#include <iostream>
#include <cstdlib>

int randomGen() {
	int rand = std::rand() % 100;   // setting the variable 'rand' to equal to a random # from 0 - 99
	return rand;
}