#include "billSplit.h"
#include <iostream>

void perSplit(double split) {
	std::cout << '\n' << "Your total amount is: $" << split << " per person." << '\n';
}

void oneAll() {
	billTotal();
	oneAllSplits();
	tipAmount();
	perSplit(((oneAllTotal + oneAllTip) / people));
}

void chip() {
	billTotal();
	tipAmount();
	chipSplits();
	split = ((total + tip) / numPeople);
	calculation();
}


void choice() {
	int ans{};
	std::cout << '\n' << "How do you want to split this?" << '\n';
	std::cout << "Did one person pay all or did everybody chip in?" << '\n';
	std::cout << "If one person pay all enter 1" << '\n';
	std::cout << "If everybody chipped in enter 2" << '\n';
	while (true) {
		std::cout << "Enter your response: ";
		if (std::cin >> ans) {
			// Input was successful
			break;
		}
		else {
			// Clear the error flag and discard the remaining input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please try again.\n";
		}
	}

	while(true) {
		if (ans == 1) {
			oneAll();
		}
		else if (ans == 2) {
			chip();
		}
	}
}

int main()
{
	intro();
	choice();
	outro();
}