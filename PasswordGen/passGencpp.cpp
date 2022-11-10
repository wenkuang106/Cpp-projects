#include "passgen.h"
#include <iostream>
#include <cstdlib>
#include <string>

void passGen(int length) {
	using namespace std;
	// initializing an empty string that will be final password to be outputed
	string password = "";
	// initializing the items to be used for the password
	string caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string lower = "abcdefghijklmnopqrstuvwxyz";
	string symbols = "!@#$%&";
	string nums = "0123456789";
	int key;
	int indexCaps = 0, indexLower = 0, indexSymbols = 0, indexNums = 0;
	int genCount = 0;
	while (genCount < length) {
		int select = selectionGen();
		switch (select){
			case 1:
				if ((indexCaps == 2) && (indexLower == 0 || indexSymbols == 2 || indexSymbols == 0 || indexNums == 0))
					break;
				key = indexKey();
				password = password + caps[key];
				indexCaps++;
				genCount++;
				break;
			case 2:
				if ((indexLower == 2) && (indexCaps == 0 || indexSymbols == 0 || indexNums == 2 || indexNums == 0))
					break;
				key = indexKey();
				password = password + lower[key];
				indexLower++;
				genCount++;
				break;
			case 3:
				if ((indexSymbols == 1) && (indexCaps == 1 || indexCaps == 0 || indexLower == 0 || indexNums == 0))
					break;
				key = indexKey();
				// since there is only 6 symbols that can be used 
				key = key % 6;
				password = password + symbols[key];
				indexSymbols++;
				genCount;
				break;
			case 4:
				if ((indexNums == 2) && (indexCaps == 0 || indexLower == 2 || indexLower == 0 || indexSymbols == 0))
					break;
				key = indexKey();
				// since there is only 10 numbers that can be used
				key = key % 10;
				password = password + nums[key];
				indexNums++;
				genCount++;
				break;
		}
			
	}
	cout << "\n-----------------------------\n";
	cout << "          Password             \n";
	cout << "------------------------------\n";
	cout << " " << password;
}