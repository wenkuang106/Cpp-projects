#include "billSplit.h"
#include <iostream>

double oneAllTotal;
int people;
double oneAllTip;

double billTotal() {
	std::cout << '\n' << "What is the total of the bill?" << '\n';
	std::cout << "NOTE: Do NOT enter the dollar sign, just the number is good enough" << '\n';
	std::cout << "Enter Bill Total: ";
	std::cin >> oneAllTotal;
	if (oneAllTotal > 100) {
		std::cout << "WOW you guys rich, aye" << '\n';
	}
	else {
		std::cout << "Damn you guys should've ordered more" << '\n';
	}

	return oneAllTotal;
}

int oneAllSplits() {
	std::cout << '\n' << "How many people are we splitting this bill by?" << '\n';
	std::cout << "Enter amount of people: ";
	std::cin >> people;

	return people;
}

double tipAmount() {
	std::cout << '\n' << "How much tip did you guys give the waiter?" << '\n';
	std::cout << "Just like before no dollar sign just number" << '\n';
	std::cout << "Enter tip amount: ";
	std::cin >> oneAllTip;
	double percent{ oneAllTip / oneAllTotal };
	if (percent >= 0.20) {
		std::cout << "DAMN someone is generous!" << '\n';
	}
	else {
		std::cout << "So little, was the waiter not nice?" << '\n';
	}

	return oneAllTip;
}