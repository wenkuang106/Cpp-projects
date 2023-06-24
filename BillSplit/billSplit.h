#ifndef BILLSPLIT_H
#define BILLSPLIT_H

extern double total;
extern int people;
extern double tip;

void intro();
double billTotal();
int splits();
double tipAmount();
void perSplit(double split);
void outro();
int main();

#endif