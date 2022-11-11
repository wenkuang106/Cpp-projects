#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

int main() {
	intro();
	int x{ choice() };
	if (x == 1){
		int length{ passLength() };
		passGen(length);
		again();
	}
	else {
		outro();
	}
	return 0;
}