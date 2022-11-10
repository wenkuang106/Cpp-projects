#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

int main() {
	intro();
	int length{ passLength() };
	passGen(length);
	return 0;
}