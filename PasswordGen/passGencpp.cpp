#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>


void passGen(int length) {
	using namespace std;
	// initializing an empty string that will be final password to be outputed
	string password = "";
	// initializing the items to be used for the password
	string options = "0123456789!@#$%&aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int key;
	for (int genCount = 0; genCount < length; genCount++) {
		password = password + options[rand() % 68];
	}
	cout << "\n-----------------------------\n";
	cout << "          Password             \n";
	cout << "------------------------------\n";
	cout << "Generated Password: " << password;
		}

	