#include "billSplit.h"
#include <iostream>
#include <string>

double total;
int numPeople;
double tip;
double split;

Person* amountPeople;

double chipBillTotal() {
	std::cout << '\n' << "What is the total of the bill?" << '\n';
	std::cout << "NOTE: Do NOT enter the dollar sign, just the number is good enough" << '\n';
	std::cout << "Enter Bill Total: ";
	std::cin >> total;
	//std::cout << total;
	if (total > 100) {
		std::cout << "WOW you guys rich, aye" << '\n';
	}
	else {
		std::cout << "Damn you guys should've ordered more" << '\n';
	}

	return total;
}

double chipTipAmount() {
	std::cout << '\n' << "How much tip did you guys give the waiter?" << '\n';
	std::cout << "Just like before no dollar sign just number" << '\n';
	std::cout << "Enter tip amount: ";
	std::cin >> tip;
	//std::cout << tip;
	double percent{ tip / total };
	if (percent >= 0.20) {
		std::cout << "DAMN someone is generous!" << '\n';
	}
	else {
		std::cout << "So little, was the waiter not nice?" << '\n';
	}

	return tip;
}

int chipSplits() {
	std::cout << '\n' << "How many people are we splitting this bill by?" << '\n';
	std::cout << "Enter amount of people: ";
	std::cin >> numPeople;
	//std::cout << numPeople;

	amountPeople = new Person[numPeople];

	// Clear the newline character from the input buffer
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	split = ((total + tip) / numPeople);
	//std::cout << split;

	std::cout << '\n';

	for (int i{}; i < numPeople; ++i) {
		std::cout << "Enter the name of person " << i + 1 << ": ";
		std::getline(std::cin, amountPeople[i].name);

		std::cout << "How much did they chip in: ";
		std::cin >> amountPeople[i].amount;

		// Clear the newline character from the input buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		amountPeople[i].remaining = amountPeople[i].amount - split;
	}

	return numPeople;
}

void calculation() {
	switch (numPeople) {
	case 0:
		std::cout << "Why the fuck are you using this if no one paid"; 
		delete[] amountPeople;
		exit(0);
	case 1:
		std::cout << "Wow if one person payed all you entered the wrong choice at the beginning. SMH" << '\n';
		oneAll();
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		std::cout << '\n' << "If the number shown below is negative that means the person owes money." << '\n';
		std::cout << "If the number shown below is positive that means the person does not owe money." << '\n' << '\n';
		for (int i{}; i < numPeople; ++i) {
			std::cout << amountPeople[i].name << ": " << amountPeople[i].remaining << '\n';
		}
		std::cout << '\n' << "The negative people can just paid the postive people however they want so that everybody = 0" << '\n';
		delete[] amountPeople;
	}
}