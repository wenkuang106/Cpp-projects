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
	chipBillTotal();
	chipTipAmount();
	chipSplits();
	calculation();
}


void choice() {
	int ans{};
	std::cout << "How do you want to split this?" << '\n';
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

	switch (ans) {
	case 1: 
		oneAll();
		break;
	case 2: 
		chip();
		break;
	}
}

int main()
{
	intro();
	choice();
	outro();
}