#ifndef BILLSPLIT_H
#define BILLSPLIT_H

#include <string>

// One Person Pays All Choice
extern double oneAllTotal;
extern int people;
extern double oneAllTip;

// Everybody Chips in Choice
extern double total;
extern int numPeople;
extern double tip;
extern double split;

struct Person {
	std::string name;
	double amount{};
	double remaining{};
};

extern Person* amountPeople;


// In all choices
void intro();
void choice();
void outro();
int main();


// One Person Pays All Choice
void oneAll();
double billTotal();
int oneAllSplits();
double tipAmount();
void perSplit(double split);

// Everybody Chips in Choice
void chip();
double chipBillTotal();
double chipTipAmount();
int chipSplits();
void calculation();

#endif