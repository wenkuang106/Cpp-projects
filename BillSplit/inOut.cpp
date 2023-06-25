#include "billSplit.h"
#include <iostream>

void intro() {
	std::cout << "===================== Bill Splitting =====================" << '\n';
	std::cout << "If you wish to get started press 'Enter'";
	std::cin.ignore();  // Ignore any characters in the input buffer
	std::cin.get();
}

void outro() {
	char ans{ };
	while (true) {
		std::cout << '\n' << "Thank you for using this application!" << '\n';
		std::cout << "Do you wish to split another bill? (Y/N)" << '\n';
		std::cout << "Choice: ";
		std::cin >> ans;
		std::cout << '\n';
		if (ans == 'Y' || ans == 'y') {
			main();
		}
		else if (ans == 'N' || ans == 'n') {
			break;
		}
		else {
			std::cout << "Invalid choice. Please enter 'Y' or 'N'." << '\n';
		}
	}
}