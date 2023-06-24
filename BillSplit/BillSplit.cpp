#include "billSplit.h"
#include <iostream>

void perSplit(double split) {
	std::cout << '\n' << "Your total amount is: $" << split << " per person." << '\n';
}

int main()
{
	intro();
	billTotal();
	splits();
	tipAmount();
	perSplit(((total + tip) / people));
	outro();
}